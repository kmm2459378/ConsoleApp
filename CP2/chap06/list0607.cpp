// べき乗を求める

#include <iostream>

using namespace std;

//--- xのn乗を返す ---//
double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0)
		tmp *= x;	// tmpにxを掛ける
	return tmp;
}

int main()
{
	double a;
	int    b;

	cout << "aのb乗を求めます。\n";
	cout << "実数a：";	cin >> a;
	cout << "整数b：";	cin >> b;
	cout << a << "の" << b << "乗は" << power(a, b) << "です。\n";
}
