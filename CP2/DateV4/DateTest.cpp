// ���t�N���XDate�i��S�Łj�̗��p��

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date today;		// ����

	cout << "���@���̓��t�F" << today << '\n';

	cout << "���@���̓��t�F" << today.preceding_day() << '\n';
	cout << "�����̓��t�F" << today.preceding_day().preceding_day() << '\n';

	cout << "���@���̓��t�F" << today.following_day() << '\n';
	cout << "������̓��t�F" << today.following_day().following_day() << '\n';

	cout << "���U����" << today.day_of_year() << "���o�߂��Ă��܂��B\n";

	cout << "���N�͉[�N"
		 << (Date::leap_year(today.year()) ? "�ł��B" : "�ł͂���܂���B") << '\n';

	int y, m, d;

	cout << "����N�F";
	cin >> y;

	cout << "���̔N�͉[�N"
		 << (Date::leap_year(y) ? "�ł��B" : "�ł͂���܂���B") << '\n';
}
