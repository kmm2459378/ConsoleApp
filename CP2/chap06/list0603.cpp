// 三つの整数値の最大値を求める（関数版）

#include <iostream>

using namespace std;

//--- a, b, cの最大値を返却 ---//
int max(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int min(int a, int b, int c)
{
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}
int main()
{
	int a, b, c;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;
	cout << "整数c：";   cin >> c;

	cout << "最大値は" << max(a, b, c) << "です。\n";
	cout << "最小値は" << min(a, b, c) << "です。\n";
}
