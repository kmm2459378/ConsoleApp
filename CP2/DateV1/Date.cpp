// 日付クラスDate（第１版：ソース部）

#include "Date.h"

//--- クラスDateのコンストラクタ ---//
Date::Date(int yy, int mm, int dd)
{
	y = yy;		// 西暦年
	m = mm;		// 月
	d = dd;		// 日
}

Date::Date() 
{
	y = 1;
	m = 1;
	d = 1;
}