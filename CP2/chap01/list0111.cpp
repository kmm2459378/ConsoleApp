// 二つの整数値を読み込んで加減乗除した値を表示

#include <iostream>

using namespace std;

int main()
{
	int x;		// 加減乗除する値
	int y;		// 加減乗除する値
	int z;
	cout << "xとyとz加減乗除します。\n";

	cout << "xとyとz値：";	// xとyの値の入力を促す
	cin >> x >> y >> z;			// xとyに整数値を読み込む

	cout << "x + yは" << x + y << "です。\n";	// x + yの値を表示
	cout << "x - yは" << x - y << "です。\n";	// x - yの値を表示
	cout << "x * yは" << x * y << "です。\n";	// x * yの値を表示
	cout << "x / yは" << x / y << "です。\n";	// x / yの値を表示（商）
	cout << "x % yは" << x % y << "です。\n\n";	// x % yの値を表示（剰余）

	cout << "x + zは" << x + z << "です。\n";	// x + zの値を表示
	cout << "x - zは" << x - z << "です。\n";	// x - zの値を表示
	cout << "x * zは" << x * z << "です。\n";	// x * zの値を表示
	cout << "x / zは" << x / z << "です。\n";	// x / zの値を表示（商）
	cout << "x % zは" << x % z << "です。\n";	// x % zの値を表示（剰余）
}
