// “Ç‚İ‚ñ‚¾ŒÂ”‚¾‚¯*‚ğ•\¦

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "‰½ŒÂ‚ğ•\¦‚µ‚Ü‚·‚©F";
	cin >> n;
	
	if (n > 0) {
		int i = 1;
		while (i <= n ) {
			cout << i % 10;
			i++;
		}
		cout << '\n';
	}
	/*int i = 0;
	while (i < n) {
		cout << "+";
		i++;;
	}
	cout << '\n';*/
}
