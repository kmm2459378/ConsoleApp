// �[�N���ǂ����𒲂ׂ�

#include <iostream>

using namespace std;

int main()
{
	int y;

	cout << "�N����͂���F";
	cin >> y;

	cout << "���̔N�͉[�N";
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		cout << "�ł��B\n";
	else
		cout << "�ł͂���܂���B\n";
}
