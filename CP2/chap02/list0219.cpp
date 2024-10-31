// 閏年かどうかを調べる

#include <iostream>

using namespace std;

int main()
{
	int y;

	cout << "年を入力せよ：";
	cin >> y;

	cout << "その年は閏年";
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		cout << "です。\n";
	else
		cout << "ではありません。\n";
}
