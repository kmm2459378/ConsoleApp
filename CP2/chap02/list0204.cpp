// 読み込んだ整数値はゼロであるかどうか

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値：";
	cin >> n;

	
	switch (n) {
	case 0: cout << "その値は0です\n";  break;
	default: cout << "その値は0ではありません\n";  break;
	}
		
}
