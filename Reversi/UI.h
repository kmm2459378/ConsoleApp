#pragma once
//======================================
//	リバーシ UI
//======================================
// ★ここにインクルードガード(開始)を記入してください
#ifndef _UI__H
#define	_UI__H
#include "Mode.h"
#include "Vector2.h"
#include "Reversi.h"

// モード選択
Mode SelectMode();
// 位置入力
Vector2 InputPosition(Reversi* reversi);

// ★ここにインクルードガード(終了)を記入してください
#endif