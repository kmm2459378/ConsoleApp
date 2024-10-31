// 読み込んだ月の季節を表示

#include <iostream>

using namespace std;

int main()
{
	int month;

	cout << "季節を求めます。\n何月ですか：";
	cin >> month;

	if (month > 2) {
		if (month < 6)		
			cout << "それは春です。\n";// 3月・ 4月・ 5月
	
	else if (month > 5){
		 if ( month < 9)	
			cout << "それは夏です。\n";// 6月・ 7月・ 8月
	}
	else if (month > 8) {
		if (month < 12)
		cout << "それは秋です。\n";	// 9月・10月・11月
		else
			cout << "そんな月は存在しません。\n";
	}
	}
	else {
		if (month == 12)	     // 12月・1月・2月
			cout << "それは冬です。\n";
		else if (month == 1)
			cout << "それは冬です。\n";
		else if (month == 2)
			cout << "それは冬です。\n";
		else
		cout << "そんな月は存在しません。\n";
	}
	
}
