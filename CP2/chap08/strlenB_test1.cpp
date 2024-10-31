// strlen関数の利用例（その１）

#include <cstring>
#include <iostream>

using namespace std;

//--- strlenの実現例Ｂ ---//

#include <cstddef>

size_t strlenB(const char* s)
{
	const char* p = s;

	while (*s)
		s++;
	return static_cast<size_t>(s - p);
}

int main(void)
{
	char str[100];

	cout << "文字列を入力してください：";
	cin >> str;

	cout << "文字列\"" << str << "\"の長さは" << strlenB(str) << "です。\n";
}
