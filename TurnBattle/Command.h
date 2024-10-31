//======================================
//	コマンド定義
//======================================
// ★ここにインクルードカード(開始)を記入してください
#ifndef __COMMAND_
#define __COMMAND_
enum Command {
	COMMAND_FIGHT,  // 戦う
	COMMAND_SPELL,  // 呪文
	COMMAND_ESCAPE, // 逃げる
	COMMAND_MAX,
};
#endif