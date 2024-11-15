// 整数配列クラスIntArray（第１版）の利用例

#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
	int n;

	cout << "要素数を入力せよ：";
	cin >> n;

	DoubleArray x(n);	// 要素数nの配列
	DoubleArray y = 6;

	for (double i = 0.5; i < x.size(); i++)					// 各要素に値を代入
		x[i] = i * 0.2;

	for (int i = 0; i < x.size(); i++)					// 各要素の値を表示
		cout << "x[" << i << "] = " << x[i] << '\n';

	for (int i = 0; i < y.size(); i++)					// 各要素に値を代入
		y[i] = i;

	for (int i = 0; i < y.size(); i++)					// 各要素の値を表示
		cout << "x[" << i << "] = " << y[i] << '\n';
}
