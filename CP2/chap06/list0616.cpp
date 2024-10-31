// 三つの整数値を昇順にソート

#include <iostream>

using namespace std;

//--- 引数xとyの値を交換 ---//
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

//--- 引数a, b, c, dを昇順にソート ---//
void sort(int& a, int& b, int& c, int& d)
{
	if (a > b) swap(a, b);  //a3 b4
	if (b > c) swap(b, c);  //b2 c4
	if (c > d) swap(c, d);  //c1 d4
	if (a > c) swap(a, c);
}

int main()
{
	int a, b, c, d;

	cout << "変数a：";   cin >> a;
	cout << "変数b：";   cin >> b;
	cout << "変数c：";   cin >> c;
	cout << "変数c：";   cin >> d;

	sort(a, b, c, d);			// a, b, cを昇順にソート

	cout << "整数a, b, cを昇順に並べかえました。\n";
	cout << "変数aの値は" << a << "です。\n";
	cout << "変数bの値は" << b << "です。\n";
	cout << "変数cの値は" << c << "です。\n";
	cout << "変数cの値は" << d << "です。\n";
}
