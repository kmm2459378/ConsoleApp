// �����I�u�W�F�N�g�𓮓I�ɐ���

#include <iostream>

using namespace std;

int main()
{
	int* x = new int(5);			// �����i�L����̊m�ہj

	/*cout << "�����F";*/
	/*cin >> *x;*/

	cout << "*x = " << *x << '\n';

	delete x;		// �j���i�L����̉���j
	
	cout << "*x = " << *x << '\n';
}
