// 0.0から1.0まで0.001単位で増やして合計を表示（繰返しをfloatで制御）

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	float sum = 0.0F;
	int i(0);
	cout << fixed << setprecision(6);
	for (float x = 0.0F; x <= 1.0F; x += 0.0001F) {
		cout << "x = " << x <<  ' ' << i << '\n';
		sum += x;
		
		i++;

	}
	cout << "sum = " << i << '\n';
	cout << "sum = " << sum << '\n';
}
