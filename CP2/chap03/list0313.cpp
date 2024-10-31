// ‹ã‹ã‚Ì•\‚ð•\Ž¦

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 16; i++) {
		for (int j = 1; j <= 8; j++)
			cout << setw(4) << i * j;
		cout << '\n';
	}
}
