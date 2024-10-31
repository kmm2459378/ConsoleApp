// 読み込んだ二つの整数値の小さいほうの値を表示（その２：条件演算子）

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;

	int min = a < b ? a : b;// 小さいほうの値
	int max = a > b ? a : b;
	if (max == a && min == b) {
		c = a - b;
	}
	else
		c = b - a;

	
	cout << "小さいほうの値は" << min << "です。\n";
	cout << "大きいほうの値は" << max << "です。\n";
	cout << "二つ整数値の差はは" << c << "です。\n";
}
