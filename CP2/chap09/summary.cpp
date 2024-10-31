#include <iostream>
#include "maxof.h"

using namespace std;

int main()
{
	int a, b;
	char s[64], t[64];

	cout << "整数a：";	  cin >> a;
	cout << "整数b：";	  cin >> b;
	cout << "文字列s：";  cin >> s;
	cout << "文字列t：";  cin >> t;

	cout << "aとbで大きいのは" << maxof(a, b)              << "です。\n";
	cout << "sとtで大きいのは" << maxof<const char*>(s, t) << "です。\n";
	cout << "sと\"ABC\"で大きいのは" << maxof<const char*>(s, "ABC") << "です。\n";
}
