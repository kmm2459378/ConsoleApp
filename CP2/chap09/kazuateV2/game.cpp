// 数当てゲーム（第２版：ゲーム部）

#include <ctime>
#include <cstdlib>
#include "kazuate.h"

using namespace std;

static int kotae = 0;

//--- 初期化 ---//
void initialize()
{
	srand(time(NULL));
}

//--- 問題（当てるべき数）の作成 ---//
void gen_no()
{
	kotae = rand() % (max_no + 1);
}

//--- 解答の判定 ---//
int judge(int cand)
{
	if (cand == kotae)		// 正解
		return 0;
	else if ((cand - kotae) <= 2)	// 大きい
		return 1;
	else if ((cand - kotae) > 2) //3以上大きい
		return 2;
	else if ((kotae - cand) <= 2)				// 小さい
		return 3;
	else if ((kotae - cand) > 2)  //2以上小さい
		return 4;
}
