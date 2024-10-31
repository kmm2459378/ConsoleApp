// 読み込んだ二つの整数値は等しいか

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;
	cout << "整数a：";   cin >> c;
	if (a == b && a == c)
		cout << "3つの値は等しいです。\n";
	else
		if (a == b || b == c || a == c)
			cout << "二つの値は等しいです。\n";
		else
			cout << "3つの値は異なります。\n";
}
