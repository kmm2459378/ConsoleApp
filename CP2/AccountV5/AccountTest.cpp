// 銀行口座クラス（第５版）の利用例

#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account suzuki("鈴木龍一", "12345678", 1000, 2125, 1, 24);  // 鈴木君の口座
	Account takeda("武田浩文", "87654321",  200, 2123, 7, 15);  // 武田君の口座
	Account miyamoto("宮本爽雅", "7777777", 10200, 2012, 6, 9);  // 武田君の口座

	suzuki.withdraw(200);	// 鈴木君が200円おろす
	takeda.deposit(100);	// 武田君が100円預ける

	cout << "鈴木君の口座\n";
	cout << "名義氏名＝" << suzuki.name() << '\n';
	cout << "口座番号＝" << suzuki.no() << '\n';
	cout << "預金残高＝" << suzuki.balance() << "円\n";
	cout << "開 設 日＝" << suzuki.opening_date() << '\n';

	cout << "\n武田君の口座\n";
	cout << "名義氏名＝" << takeda.name() << '\n';
	cout << "口座番号＝" << takeda.no() << '\n';
	cout << "預金残高＝" << takeda.balance() << "円\n";
	cout << "開 設 日＝" << takeda.opening_date().year()  << "年"
						 << takeda.opening_date().month() << "月"
						 << takeda.opening_date().day()   << "日\n";

	cout << "\n宮本君の口座\n";
	cout << "名義氏名＝" << miyamoto.name() << '\n';
	cout << "口座番号＝" << miyamoto.no() << '\n';
	cout << "預金残高＝" << miyamoto.balance() << "円\n";
	cout << "開 設 日＝" << miyamoto.opening_date().year() << "年"
		<< miyamoto.opening_date().month() << "月"
		<< miyamoto.opening_date().day() << "日\n";
}
