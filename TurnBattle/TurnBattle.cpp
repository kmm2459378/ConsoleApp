//======================================
//	ターン制バトル
//======================================
#include "TurnBattle.h"
#include "Utility.h"
#include <stdio.h>  // printf()
#include <stdbool.h>  //bool


// 関数プロトタイプ
static void execCommand(TurnBattle* btl, Command cmd, Character* offense, Character* defense);

// ターンバトル設定
void SetTurnBattle(TurnBattle* btl, Character* player, Character* bossenemy )
{
	btl->player = player;
	btl->bossenemy = bossenemy;
}
// イントロ「〜が現れた!!」表示
void IntroTurnBattle(TurnBattle* btl)
{
	bool zako = true;
	bool papa = true;
	DrawBattleScreen(btl);
	
	// ★ここで「(敵の名前)が　あらわれた!!」を表示してください
	
		printf("%sがあらわれた!!\n", GetName(btl->bossenemy));
	    WaitKey();	
}
// バトル開始
void StartTurnBattle(TurnBattle* btl)
{
	btl->turn = 1;
	StartCharacter(btl->player);
	StartCharacter(btl->bossenemy);
}
// バトル画面を描画
void DrawBattleScreen(TurnBattle* btl)
{  
	ClearScreen();
	IndicatePlayer(btl->player);
     IndicateEnemy(btl->bossenemy);
	
}
// プレーヤのターン実行
bool ExecPlayerTurn(TurnBattle* btl, Command cmd)
{
	execCommand(btl, cmd, btl->player, btl->bossenemy);
	if (IsDeadCharacter(btl->bossenemy)) {
		SetEraseAa(btl->bossenemy);
		DrawBattleScreen(btl);
		// ★ここで「(敵の名前)を　たおした!」を表示してください
		printf("%sを たおした!\n", GetName(btl->bossenemy));
		WaitKey();
		return true;
	}
	return IsEscapeCharacter(btl->player);
}
// 敵のターン実行
bool ExecEnemyTurn(TurnBattle* btl, Command cmd)
{
	execCommand(btl, cmd, btl->bossenemy, btl->player);
	if (IsDeadCharacter(btl->player)) {
		DrawBattleScreen(btl);
		// ★ここで「"あなたは　しにました」を表示してください
		printf("あなたは　しにました\n");
		WaitKey();
		return true;
	}
	return false;
}
// コマンド実行(offense:攻撃キャラ defense:防御キャラ)
static void execCommand(TurnBattle* btl, Command cmd, Character* offense, Character* defense)
{
	int dmg;
	switch (cmd) {
	case COMMAND_FIGHT:
		DrawBattleScreen(btl);
		// ★ここで「(攻撃側の名前)の　こうげき!」を表示してください
		printf("%sの　こうげき!\n", GetName(offense));
		WaitKey();

		dmg = CalcDamage(offense);
		DamageCharacter(defense, dmg);
		DrawBattleScreen(btl);
		// ★ここで「(防御側の名前)に (ダメージ値)の　ダメージ!」を表示してください
        printf("%sに %dの　ダメージ!\n",GetName(defense), dmg);
		WaitKey();

		break;
	case COMMAND_SPELL:
		if (CanSpellCharacter(offense) == false) {
			DrawBattleScreen(btl);
			// ★ここで「ＭＰが　たりない!」を表示してください
			printf("ＭＰが　たりない\n");
			WaitKey();
			break;
		}
		UseSpellCharacter(offense);
		DrawBattleScreen(btl);
		// ★ここで「(攻撃側の名前)は　ヒールを　となえた!」を表示してください
		printf("%sは　ヒールをとなえた!\n", GetName(offense));
		WaitKey();

		RecoverCharacter(offense);
		DrawBattleScreen(btl);
		// ★ここで「(攻撃側の名前)のきずが　かいふくした!」を表示してください
		printf("%sのきずが　かいふくした!\n", GetName(offense));
		WaitKey();
		break;

	case COMMAND_ESCAPE:
		DrawBattleScreen(btl);
		// ★ここで「(攻撃側の名前)は　にげだした!」を表示してください
		printf("%sは　にげだした\n", GetName(offense));
		WaitKey();
		SetEscapeCharacter(offense);
		break;
	}
}
// 次のターンへ
void NextTurnBattle(TurnBattle* btl)
{
	btl->turn++;
}