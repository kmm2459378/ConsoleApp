// �ǂݍ��񂾌�����*��\���ifor���j

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "����*��\�����܂����F";
	cin >> n;

	for (int i = 0; i < n; ++i) {
       cout << "*";
	  if(( i % 5) == 0)
		cout << "\n";
	}
		
	cout << '\n';
}
