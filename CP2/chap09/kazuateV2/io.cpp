// 数当てゲーム（第２版：入出力部）

#include <iostream>
#include "kazuate.h"

using namespace std;

//--- 入力を促す ---//
static void prompt()
{
	cout << "0～" << max_no << "の数：";
}

//--- 解答の入力 ---//
int input()
{
	int val;
	do {
		prompt();	// 入力を促す
		cin >> val;
		if (val < 0 || val > max_no) {
			cout << "0以上" << max_no << "以下の数を入力してください\n";
		}
	} while (val < 0 || val > max_no);
	return val;
}

int answer_number() {
	return cnt_;
}

//--- 続行の確認 ---//
bool confirm_retry()
{
	int cont;
	cout << "もう一度しますか？\n"
		 << "<Yes…1／No…0>：";
	cin >> cont;
	return static_cast<bool>(cont);
}
