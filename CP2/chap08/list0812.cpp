// �z��ɂ�镶����ƃ|�C���^�ɂ�镶����

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

	cout << "���������͂��Ă�������";
	cin >> str;

	cout << "������\"" << str << "\"�̒�����" << strlenA(str) << "�ł��B\n";
}
