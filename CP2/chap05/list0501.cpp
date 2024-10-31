// ５人の点数を読み込んで合計点・平均点を表示

#include <iostream>

using namespace std;

int main()
{
	int yamane, takada, kawakami, saegusa, tozuka, ore, oreo,oragon;	// 点数
	int sum = 0;		// 合計
	cout << "5人の点数の合計点と平均点を求めます。\n";
	cout << "1番の点数：";   cin >> yamane;    sum += yamane;
	cout << "2番の点数：";   cin >> takada;    sum += takada;
	cout << "3番の点数：";   cin >> kawakami;  sum += kawakami;
	cout << "4番の点数：";   cin >> saegusa;   sum += saegusa;
	cout << "5番の点数：";   cin >> tozuka;    sum += tozuka;
	cout << "6番の点数：";   cin >> ore;   sum += ore;
	cout << "7番の点数：";   cin >> oreo;   sum += oreo;
	cout << "7番の点数：";   cin >> oragon;   sum += oragon;
	cout << "合計は" << sum << "点です。\n";
	cout << "平均は" << static_cast<double>(sum) / 8 << "点です。\n";
}
