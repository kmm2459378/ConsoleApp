// ���̐����l���O�܂ŃJ�E���g�_�E���i���̂P�j

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;

	cout << "�J�E���g�_�E�����܂��B\n";
	do {
		cout << "���̐����l�F";
		cin >> x;
	} while (x <= 0);

	while (x >= 0) {
		cout << x << "\n";	// x�̒l��\��
	 x = x - 0.5;				// x�̒l���f�N�������g�i�l������炷�j
	}
}
