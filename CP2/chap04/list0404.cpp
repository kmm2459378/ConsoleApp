// �ǂݍ��񂾕����̃R�[�h��\��

#include <climits>
#include <iostream>

using namespace std;

int main()
{
	char c;

	cout << "��������͂���F";
	cin >> c;
	cout << showbase;
	cout <<"����'" << c << "'�̕����R�[�h��" << hex << int(c) << "�ł��B\n";
}
