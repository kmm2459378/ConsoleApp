// ���t�N���XDate�i��P�Łj�ƃI�u�W�F�N�g�̏�����

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date a(2015, 11, 18);
	Date b = a;
	Date c = Date(2023, 12, 27);
	Date birthday(2005, 6, 9);

	cout << "a = " << a.year() << "�N" << a.month() << "��" << a.day() << "��\n";
	cout << "b = " << b.year() << "�N" << b.month() << "��" << b.day() << "��\n";
	cout << "c = " << c.year() << "�N" << c.month() << "��" << c.day() << "��\n";
	cout << "d= " << birthday.year() << "�N" << birthday.month() << "��" << birthday.day() << "��\n";
}
