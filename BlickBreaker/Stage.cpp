//======================================
//	ブロックくずし ステージ
//======================================
#include "Stage.h"
#include "Utility.h"
#include <stdio.h>

// 関数プロトタイプ
static void InitPaddle(Stage* stage);
static void InitField(Stage* stage);
static void SetField(Stage* stage, int x, int y, Field value);
static bool IsInField(int x, int y);
static bool IsBallPosition(Stage* stage, int x, int y);
static bool IsPaddlePosition(Stage* stage, int x, int y);
static void DrawHorizontalWall();

const char* AA_WALL = "■";
const char* AA_BALL = "●";
const char* AA_PADDLE = "回";
const char* AA_BLOCK = "□";
const char* AA_NONE = "　";

// ステージ初期化
void InitializeStage(Stage* stage)
{
	ResetBall(stage);
	InitPaddle(stage);
	InitField(stage);
}
// パドルの初期化
static void InitPaddle(Stage* stage)
{
	// ★ここをコーディングしてください。
	// パドルの位置をYは下端から3つ上、Xは横幅の中央になるように設定します
}
// フィールドの初期化
static void InitField(Stage* stage)
{
	// ★ここをコーディングしてください。
	// フィールドの上部1/4 をブロックで埋めてください。
	// それ以外は空間です。
}
// ボールの初期化(リセット)
void ResetBall(Stage* stage)
{
	// ★ここをコーディングしてください。
	// ボールの位置、Yをフイールド高さの1/3、Xをランダム値にします
	// ボールの速度、Yは下(1)へ、Xは乱数で左(-1)または右(1)にします
}
void DrawScreen(Stage* stage, DrawMode mode)
{
	ClearScreen();
	DrawHorizontalWall();
	for (int y = 0; y <= FIELD_HEIGHT; y++) {
		printf(AA_WALL);
		for (int x = 0; x < FIELD_WIDTH; x++) {
			// ★ここをコーディングしてください
			// (x,y)がボールの位置なら、AA_BALLを描画します
			// (x,y)がパドルの位置なら、AA_PADDLEを描画します
			// (x,y)のフィールドがブロックなら AA_BLOCKを、空間ならAA_SPACEを描画します
		}
		printf(AA_WALL);
		putchar('\n');
	}
	DrawHorizontalWall();

	const char* msg = nullptr;
	int len;
	switch (mode) {
	case DM_PAUSE: msg = "ＰＡＵＳＥ"; len = 5; break;
	case DM_READY: msg = "ＲＥＡＤＹ"; len = 5; break;
	case DM_CLEAR: msg = "ＳＴＡＧＥ　ＣＬＥＡＲ"; len = 11; break;
	}
	if (msg != nullptr) {
		const int SCREEN_WIDTH = FIELD_WIDTH + 2;
		const int SCREEN_HEIGHT = FIELD_HEIGHT + 2;
		SaveCursor();
		// ★ここをコーディングしてください。
		// メッセージをスクリーン領域の真ん中に表示します。
		RestoreCursor();
	}
}
// ボール位置か?
static bool IsBallPosition(Stage* stage, int x, int y)
{
	// ★ここをコーディングしてください
	// (x,y)がボール位置か判定して真偽を返します
}
// パドルの位置か?
static bool IsPaddlePosition(Stage* stage, int x, int y)
{
	// ★ここをコーディングしてください
	// (x,y)がパドルに重なっているか判定して真偽を返します
}
// 水平壁の描画
static void DrawHorizontalWall()
{
	// ★ここをコーディングしてください
	// スクリーン領域の上下に横幅の壁を描画します。
}
// ボールの移動
void MoveBall(Stage* stage)
{
	stage->ballX += stage->ballVelocityX;
	stage->ballY += stage->ballVelocityY;

	// ボールが端にあるなら速度反転
	if (stage->ballX <= 0) {
		stage->ballVelocityX = 1;
	}
	else if (stage->ballX >= FIELD_WIDTH - 1) {
		stage->ballVelocityX = -1;
	}
	if (stage->ballY <= 0) {
		stage->ballVelocityY = 1;
	}
	else if (stage->ballY >= FIELD_HEIGHT - 1) {
		stage->ballVelocityY = -1;
	}
	// ボールがハドルに当たったら反射
	if (stage->ballY == stage->paddleY - 1) {
		if (stage->ballX >= stage->paddleX - 1
			&& stage->ballX <= stage->paddleX + PADDLE_WIDTH + 1) {
			stage->ballVelocityX = (stage->ballX < stage->paddleX + PADDLE_WIDTH / 2) ? -1 : 1;
			stage->ballVelocityY = -1;
		}
	}
	// ボールの上3コマのブロックを消す
	for (int x = stage->ballX - 1; x <= stage->ballX + 1; x++) {
		int y = stage->ballY - 1;
		if (GetField(stage, x, y) == FIELD_BLOCK) {
			SetField(stage, x, y, FIELD_NONE);
			stage->ballVelocityY = 1;
		}
	}
}
// ボールを落としてしまった?
bool IsBallMiss(Stage* stage)
{
	// ★ここをコーディングしてください
	// ボールのY座標が、フィールド最下に達したかで真偽を返します
}
// 面クリア?
bool IsClear(Stage* stage)
{
	// ★ここをコーディングしてください
	// フィールドを走査して、ブロックが無いことを確認して真偽を返します
}
// パドル移動
void MovePaddle(Stage* stage, int addX)
{
	// ★ここをコーディングしてください
	// パドルのX座標に addXを加算します
	// パドルがフィールド幅をはみ出さないようにします。
}
// フィールドのセッター
static void SetField(Stage* stage, int x, int y, Field value)
{
	// ★ここをコーディングしてください
	// (x,y)がフィールド内を確認して、valueを代入します
}
static Field GetField(Stage* stage, int x, int y)
{
	// ★ここをコーディングしてください
	// (x,y)がフィールド内を確認して、値を返します
	// フィールド内でなれれば、FIELD_OUTを返します
}
// フィールド内か?
static bool IsInField(int x, int y)
{
	// ★ここをコーディングしてください
	// (x,y)がフィールド内か判定して、真偽を返します
}
