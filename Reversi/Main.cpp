//======================================
//	リバーシ メイン
//======================================
#include "Utility.h"
#include "Reversi.h"
#include "UI.h"
#include "Vector2List.h"
#include <stdio.h>  // printf()
// 関数プロトタイプ
static void game(Reversi* reversi, Vector2List* v2list);

int main()
{
	InitRand();
	Reversi reversi;
	Vector2List v2list;
	InitializeVector2List(&v2list, BOARD_WID * BOARD_HEI);

	bool isEnd = false;
	while (isEnd == false) {
		game(&reversi, &v2list);
		printf("\nもう一度 (y/n):");
		while (true) {
			Key k = GetKey();
			if (k == 'y') {
				break;
			}
			if (k == 'n') {
				isEnd = true;
				break;
			}
		}
	}
	FinalizeVector2List(&v2list);
	return 0;
}

void game(Reversi* reversi, Vector2List* v2list)
{
	Vector2 dummyPos = { -1,-1 };
	Mode mode = SelectMode();
	Init(reversi, mode);
	while (true)
	{
		Cell turn = reversi->turn;
		// 打てるところがあるか?
		if (CheckCanPlaceAll(reversi, turn)) {
			Vector2 placePos = { 0,0 };
			if (IsHumanPlayer(reversi)) {
				// 人間プレーヤ
				placePos = InputPosition(reversi);
			}
			else {
				// CPUプレーヤ
				DrawScreen(reversi, dummyPos, IN_PLAY);
				WaitKey();
				// 打てるリストからランダムに選ぶ.
				//
				// ★ここをコーディングしてください
				//  v2listをクリア
				//  ListCanPlaceAll() で打てるところをリスティング
				//  v2listから登録数を取得して
				//  0〜登録数-1の乱数を取得(インデックス)
				//  v2listから、インデックスに対応する Vector2を取得して placePosに格納する
				//
			}
			CheckCanPlace(reversi, turn, placePos, true);
			SetBoard(reversi, placePos.x, placePos.y, turn);
		}
		else {
			// 相手も打てないなら終了
			Cell opponent = GetOpponent(turn);
			if (CheckCanPlaceAll(reversi, opponent) == false) {
				break;
			}
			// 「打てない」表示
			DrawScreen(reversi, dummyPos, NO_PLACE);
			WaitKey();
		}
		NextTurn(reversi);
	}
	// リザルト表示
	DrawScreen(reversi, dummyPos, RESULT);
	WaitKey();
}