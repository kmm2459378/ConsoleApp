//======================================
//	マインスィーパー メイン
//======================================
#include "Stage.h"
#include "Utility.h"  // InitRand(),GetKey()
#include <stdio.h>  // printf()
// 関数プロトタイプ
void game();

int main()
{
	InitRand();

	int c;
	do {
		game();
		printf("もう一度(y/n)?");
		while (true) {
			c = GetKey();
			if (c == 'y' || c == 'n') {
				break;
			}
		}
	} while (c == 'y');

	return 0;
}

void game()
{
	Stage stage[1];

	InitializeStage(stage);
	bool isEnd = false;
	while (isEnd == false) {
		DrawScreen(stage);
		Key c = GetKey();
		switch (c) {
		case ARROW_UP:
			// ★ここをコーディングしてください。
			// MoveCursor()を呼びます
			break;
		case ARROW_DOWN:
			// ★ここをコーディングしてください。
			// MoveCursor()を呼びます
			break;
		case ARROW_LEFT:
			// ★ここをコーディングしてください。
			// MoveCursor()を呼びます
			break;
		case ARROW_RIGHT:
			// ★ここをコーディングしてください。
			// MoveCursor()を呼びます
			break;
		case 'f':  // フラグon/off
			// ★ここをコーディングしてください。
			// FlipCursorFlag()を呼びます
			break;
		case SPACE:  // 開放
			// ★ここをコーディングしてください。
			// OpenCursorCell()を呼びます。
			// 返り値をisEnd に入れます
			break;
		}
	}
	if (IsLose(stage)) {
		DrawScreen(stage);
		printf("\nＢＯＭ！！　ＹＯＵ　ＬＯＳＥ．\n");
	}
	else {
		DrawScreen(stage);
		printf("\nＣＬＥＡＲ！　ＹＯＵ　ＷＩＮ．\n");
	}
}