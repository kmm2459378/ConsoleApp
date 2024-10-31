//======================================
//	�^�[�����o�g��
//======================================
#include "TurnBattle.h"
#include "Utility.h"
#include <stdio.h>  // printf()
#include <stdbool.h>  //bool


// �֐��v���g�^�C�v
static void execCommand(TurnBattle* btl, Command cmd, Character* offense, Character* defense);

// �^�[���o�g���ݒ�
void SetTurnBattle(TurnBattle* btl, Character* player, Character* bossenemy )
{
	btl->player = player;
	btl->bossenemy = bossenemy;
}
// �C���g���u�`�����ꂽ!!�v�\��
void IntroTurnBattle(TurnBattle* btl)
{
	bool zako = true;
	bool papa = true;
	DrawBattleScreen(btl);
	
	// �������Łu(�G�̖��O)���@�����ꂽ!!�v��\�����Ă�������
	
		printf("%s�������ꂽ!!\n", GetName(btl->bossenemy));
	    WaitKey();	
}
// �o�g���J�n
void StartTurnBattle(TurnBattle* btl)
{
	btl->turn = 1;
	StartCharacter(btl->player);
	StartCharacter(btl->bossenemy);
}
// �o�g����ʂ�`��
void DrawBattleScreen(TurnBattle* btl)
{  
	ClearScreen();
	IndicatePlayer(btl->player);
     IndicateEnemy(btl->bossenemy);
	
}
// �v���[���̃^�[�����s
bool ExecPlayerTurn(TurnBattle* btl, Command cmd)
{
	execCommand(btl, cmd, btl->player, btl->bossenemy);
	if (IsDeadCharacter(btl->bossenemy)) {
		SetEraseAa(btl->bossenemy);
		DrawBattleScreen(btl);
		// �������Łu(�G�̖��O)���@��������!�v��\�����Ă�������
		printf("%s�� ��������!\n", GetName(btl->bossenemy));
		WaitKey();
		return true;
	}
	return IsEscapeCharacter(btl->player);
}
// �G�̃^�[�����s
bool ExecEnemyTurn(TurnBattle* btl, Command cmd)
{
	execCommand(btl, cmd, btl->bossenemy, btl->player);
	if (IsDeadCharacter(btl->player)) {
		DrawBattleScreen(btl);
		// �������Łu"���Ȃ��́@���ɂ܂����v��\�����Ă�������
		printf("���Ȃ��́@���ɂ܂���\n");
		WaitKey();
		return true;
	}
	return false;
}
// �R�}���h���s(offense:�U���L���� defense:�h��L����)
static void execCommand(TurnBattle* btl, Command cmd, Character* offense, Character* defense)
{
	int dmg;
	switch (cmd) {
	case COMMAND_FIGHT:
		DrawBattleScreen(btl);
		// �������Łu(�U�����̖��O)�́@��������!�v��\�����Ă�������
		printf("%s�́@��������!\n", GetName(offense));
		WaitKey();

		dmg = CalcDamage(offense);
		DamageCharacter(defense, dmg);
		DrawBattleScreen(btl);
		// �������Łu(�h�䑤�̖��O)�� (�_���[�W�l)�́@�_���[�W!�v��\�����Ă�������
        printf("%s�� %d�́@�_���[�W!\n",GetName(defense), dmg);
		WaitKey();

		break;
	case COMMAND_SPELL:
		if (CanSpellCharacter(offense) == false) {
			DrawBattleScreen(btl);
			// �������Łu�l�o���@����Ȃ�!�v��\�����Ă�������
			printf("�l�o���@����Ȃ�\n");
			WaitKey();
			break;
		}
		UseSpellCharacter(offense);
		DrawBattleScreen(btl);
		// �������Łu(�U�����̖��O)�́@�q�[�����@�ƂȂ���!�v��\�����Ă�������
		printf("%s�́@�q�[�����ƂȂ���!\n", GetName(offense));
		WaitKey();

		RecoverCharacter(offense);
		DrawBattleScreen(btl);
		// �������Łu(�U�����̖��O)�̂������@�����ӂ�����!�v��\�����Ă�������
		printf("%s�̂������@�����ӂ�����!\n", GetName(offense));
		WaitKey();
		break;

	case COMMAND_ESCAPE:
		DrawBattleScreen(btl);
		// �������Łu(�U�����̖��O)�́@�ɂ�������!�v��\�����Ă�������
		printf("%s�́@�ɂ�������\n", GetName(offense));
		WaitKey();
		SetEscapeCharacter(offense);
		break;
	}
}
// ���̃^�[����
void NextTurnBattle(TurnBattle* btl)
{
	btl->turn++;
}