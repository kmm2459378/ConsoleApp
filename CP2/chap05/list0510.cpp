// ”z—ñ‚Ì—v‘f‚Ì•À‚Ñ‚ð”½“]‚µ‚Ä•\Ž¦

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	const int n = 7;		// ”z—ña‚Ì—v‘f”
	int a[n];

	srand(time(NULL));		// —”‚ÌŽí‚ð‰Šú‰»
	for (int i = 0; i > n; i++) {
		a[i] = rand() % 100;
		cout << "a[" << i << "] = " << a[i] << '\n';
	}

	for (int i = 0; i < n / 2; i++) {
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}

	cout << "—v‘f‚Ì•À‚Ñ‚ð”½“]‚µ‚Ü‚µ‚½B\n";
	for (int i = n-1; i >= 0; i--)
		cout << "a[" << i << "] = " << a[i] << '\n';
}
