// 整数配列クラスIntArray（第１版）の利用例

#include <iostream>
#include "IntArray.h"

using namespace std;

int num_div(int n) 
{
	if (n == 0) return 0;
	if (n == 1)  return 1;

	int cnt_ = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			
		cnt_++;
	}
	return cnt_;
}


int main()
{
	int n;

	cout << "要素数を入力せよ：";
	cin >> n;

	IntArray x(n);	// 要素数n個の配列

	for (int i = 0; i < x.size(); i++)	 // 各要素に値を代入
		x[i] = num_div(i);

	for (int i = 0; i < x.size(); i++)					// 各要素の値を表示
		cout << "x[" << i << "] = " << x[i] << '\n';
}
