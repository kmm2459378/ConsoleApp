//======================================
//	マインスィーパー セル
//======================================
#include "Cell.h"
// セットフップ(初期化)状態にする
void SetupCell(Cell* cell)
{
	// ★ここをコーディングしてください
	// cellのbombを false にセットします
	// cellのhideを true にセットします
	// cellのflagを false にセットします
	// cellのadjacentBombsを 0 にセットします
}
// bombか?
bool IsBomb(Cell* cell)
{
	// ★ここをコーディングしてください
	// cellのbombを返します
}
// bomb をセット
void SetBomb(Cell* cell, bool value)
{
	// ★ここをコーディングしてください
	// cellのbombにvalueを代入します
}
// hideか?
bool IsHide(Cell* cell)
{
	// ★ここをコーディングしてください
	// cellのhideを返します
}
// hide をセット
void SetHide(Cell* cell, bool value)
{
	// ★ここをコーディングしてください
	// cellのhideにvalueを代入します
}
// flagか?
bool IsFlag(Cell* cell)
{
	// ★ここをコーディングしてください
	// cellのflagを返します
}
// flag を反転
void FlipFlag(Cell* cell)
{
	// ★ここをコーディングしてください
	// cellのflagを反転します
}
// adjacentBombsを取得
int GetAdjacentBombs(Cell* cell)
{
	// ★ここをコーディングしてください
	// cellのadjacentBombsを返します
}
// adjacentBombsをセット
void SetAdjacentBombs(Cell* cell, int value)
{
	// ★ここをコーディングしてください
	// cellのadjacentBombsにvalueを代入します
}
// 開示する
void OpenCell(Cell* cell)
{
	// ★ここをコーディングしてください
	// cellのhideにfalseを入れます
	// cellのflagにfalseを入れます
}