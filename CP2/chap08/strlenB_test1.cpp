// strlen�֐��̗��p��i���̂P�j

#include <cstring>
#include <iostream>

using namespace std;

//--- strlen�̎�����a ---//

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

	cout << "���������͂��Ă��������F";
	cin >> str;

	cout << "������\"" << str << "\"�̒�����" << strlenB(str) << "�ł��B\n";
}