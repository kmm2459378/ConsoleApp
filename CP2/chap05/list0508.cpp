// zρΜSvfΙπγό΅Δ\¦

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));		// Μνπϊ»
	const int n = 5;		// zρaΜvf
	int a[n];				// vf^ͺint^ΕvfnΜzρ

	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;		// 0`9Μπγό

	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}
