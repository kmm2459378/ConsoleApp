// 日付クラスDate（第１版）とオブジェクトの初期化

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date a(2015, 11, 18);
	Date b = a;
	Date c = Date(2023, 12, 27);
	Date birthday(2005, 6, 9);

	cout << "a = " << a.year() << "年" << a.month() << "月" << a.day() << "日\n";
	cout << "b = " << b.year() << "年" << b.month() << "月" << b.day() << "日\n";
	cout << "c = " << c.year() << "年" << c.month() << "月" << c.day() << "日\n";
	cout << "d= " << birthday.year() << "年" << birthday.month() << "月" << birthday.day() << "日\n";
}
