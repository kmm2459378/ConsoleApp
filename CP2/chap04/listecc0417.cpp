// �I�΂ꂽ�����̖�����\��

#include <iostream>

using namespace std;

int main()
{
	enum animal { Spring, Summer, Autumn, Winter, Close };
	int type;

	do {
		cout << "0�c�t�@1�c�ā@2�c�H�@3�c�~�@�S�c�I���F\n";
		cin >> type;
	} while (type < Spring || type > Close);

	if (type != Close) {
		animal selected = static_cast<animal>(type);
		switch (selected) {
		 case Spring : cout << "�t�͂����ڂ�\n";	break;
		 case Summer : cout << "�Ă͖�\n";	break;
		 case Autumn : cout << "�H�͗[���\n";	break;
		 case Winter : cout << "�~�͖��߂�\n";	break;
		}
	}
}
