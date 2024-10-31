// 正の整数値を読み込んで逆順に表示

#include <iostream>

using namespace std;

int main()
{
	int x;
	int i(0);
	int y(0);
	cout << "正の整数値を逆順に表示します。\n";
	do {
		cout << "正の整数値：";
		cin >> x;
	} while (x <= 0);
	cout << x;
	y = x;
	cout << "を逆から読むと";
	while (x > 0) {
		cout << x % 10;			// xの最下位桁を表示
		x /= 10;                // xを10で割る
		i++;
	}
	cout << "です。\n";
	cout << y << "は" << i << "桁です。\n";
}
