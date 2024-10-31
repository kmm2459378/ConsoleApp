// 読み込んだ整数を加算（合計が1,000を超えない範囲で加算する）

#include <iostream>

using namespace std;

int main()
{
	int n;			// 加算する個数
	cout << "整数を加算します。\n";
	cout << "何個加算しますか：";
	cin >> n;

	int sum = 1;	// 合計値
	for (int i = 0; i < n; i++) {
		int t;
		cout << "整数：";
		cin >> t;
		if (sum * t > 10000) {
			cout << "\a合計が1,0000を超えました。\n最後の数値は無視します。\n";
			break;
		}
		sum *= t;
	}
	if(n == 0)
	cout << "合計は" << sum-1 << "です。\n";
	else
	cout << "合計は" << sum << "です。\n";
}
