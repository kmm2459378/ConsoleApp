// �ǂݍ��񂾌�����*��\��

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "����\�����܂����F";
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
