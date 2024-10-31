// 配列による文字列とポインタによる文字列

#include <iostream>
#include <cstddef>
using namespace std;

size_t strlenA(const char* s)
{
	size_t len = 0;
	/*while (*s++)
		len++;*/
	for (len = 0; *s++; len++)
		;
	return len;
}
int main()
{   
	char str[100];

	cout << "文字列を入力してください";
	cin >> str;

	cout << "文字列\"" << str << "\"の長さは" << strlenA(str) << "です。\n";
}
