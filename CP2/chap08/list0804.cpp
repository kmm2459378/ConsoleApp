// �z��ɕ�������i�[���ĕ\���i����j

#include <iostream>

using namespace std;

int main()
{
	char s[6] = "ABC\00";	// ��������i�[����z��

	cout << "�z��s�ɕ�����\"" << s << "\"���i�[����Ă��܂��B\n";
}
