// �ǂݍ��񂾓�̐����l�̏������ق��̒l��\���i���̂Q�F�������Z�q�j

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	int min = a < b ? a : b;// �������ق��̒l
	int max = a > b ? a : b;
	if (max == a && min == b) {
		c = a - b;
	}
	else
		c = b - a;

	
	cout << "�������ق��̒l��" << min << "�ł��B\n";
	cout << "�傫���ق��̒l��" << max << "�ł��B\n";
	cout << "������l�̍��͂�" << c << "�ł��B\n";
}
