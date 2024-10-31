// 配列の各要素に1, 2, 3, 4, 5を代入して表示（for文）

#include <iostream>

using namespace std;

int main()
{
	const int ninzu = 8;		// 要素型がint型で要素数5の配列
	int a[ninzu];
	for (int i = 0; i < ninzu; i++)
		a[i] = (ninzu-i);

	for (int i = 0; i < 8; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}
