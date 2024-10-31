// 数当てゲーム（第２版：メイン部）

#include <iostream>
#include "kazuate.h"

using namespace std;

int max_no = 9;			// 当てるべき数の最大値
int cnt_ = 0;
int main()
{
	initialize();		// 初期化
	cout << "数当てゲーム開始！\n";

	do {
		gen_no();		// 問題（当てるべき数）の作成
		int hantei;
		do {
			hantei = judge(input());	// 解答の判定
			if (hantei == 1)
				cout << "\aもっと小さいですよ。\n";
			else if (hantei == 2)
				cout << "\aもっともっと小さいですよ。\n";
			else if (hantei == 3)
				cout << "\aもっと大きいですよ。\n";
			else if (hantei == 4)
				cout << "\aもっともっと大きいですよ。\n";
			cnt_++;
		} while (hantei != 0);
		cout << "正解です。\n";
		cout << "貴方は" << answer_number() << "回目で正解しました\n";
	} while (confirm_retry());
}
