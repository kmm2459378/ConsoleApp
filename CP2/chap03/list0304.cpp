// 正の整数値を０までカウントダウン（その１）

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;

	cout << "カウントダウンします。\n";
	do {
		cout << "正の整数値：";
		cin >> x;
	} while (x <= 0);

	while (x >= 0) {
		cout << x << "\n";	// xの値を表示
	 x = x - 0.5;				// xの値をデクリメント（値を一つ減らす）
	}
}
