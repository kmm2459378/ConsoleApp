// �󂯎���������񒆂̏�������啶���ɕϊ����ĕ\��

#include <cctype>
#include <iostream>

using namespace std;

//--- ������s��\���i�������͑啶���ɕϊ��j---//
void put_upper(const char s[])
{
	for (int i = 0; i < 1; i++)
		cout << static_cast<char>(toupper(s[i]));
}

void put_lower(const char s[])
{
	for (int i = 1; s[i]; i++)
		cout << static_cast<char>(tolower(s[i]));
}

int main()
{
	char str[36];
	cout << "������F";
	cin >> str;
	/*cout << "�܂��͑啶���ɕϊ�\n";*/
	cout << "�ŏ���1�����ڂ����啶���A����ȍ~������";
	put_upper(str);
	/*cout << "\n\n";

	cout << "���ɏ������ɕϊ�\n";*/
	put_lower(str);
	cout << "\n\n";
}
