// �ǂݍ��񂾓�̐����l�͓�������

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;
	cout << "����a�F";   cin >> c;
	if (a == b && a == c)
		cout << "3�̒l�͓������ł��B\n";
	else
		if (a == b || b == c || a == c)
			cout << "��̒l�͓������ł��B\n";
		else
			cout << "3�̒l�͈قȂ�܂��B\n";
}
