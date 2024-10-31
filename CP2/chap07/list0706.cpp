// 二つの整数値の和と積を関数によって求める

#include <iostream>

using namespace std;

//--- xとyの和と積を*sumと*mulに求める ---//
void sum_mul(int x, int y, int* sum, int* mul, int* deff)
{
	*sum = x + y;
	*mul = x * y;
	/*if (x > y)
		*deff = x - y;
	else
		*deff = y - x;*/
	*deff = x > y ? x - y : y - x;
}

int main()
{
	int a, b;
	int wa = 0, seki = 0, sa = 0;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;

	sum_mul(a, b, &wa, &seki, &sa);		// aとbの和と積を求める

	cout << "和は" << wa   << "です。\n";
	cout << "積は" << seki << "です。\n";
	cout << "差は" << sa << "です。\n";
}
