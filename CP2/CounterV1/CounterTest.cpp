// �J�E���^�N���XCounter�i��P�Łj�̗��p��

#include <iostream>
#include "Counter.h"
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int no;
	Counter x;

	cout << "���݂̃J�E���^�F" << x.value() << '\n';

	cout << "�J�E���g�A�b�v�񐔁F";
	cin >> no;


	if ((rand()%3) == 0) {
		cout << "�g���v���A�b�v!!\n";
		no *= 3;
	}
	for (int i = 0; i < no; i++) {
		x.increment();					// �J�E���g�A�b�v
		cout << x.value() << '\n';
	}



	cout << "�J�E���g�_�E���񐔁F";
	cin >> no;

	for (int i = 0; i < no; i++) {
		x.decrement();					// �J�E���g�_�E��
		cout << x.value() << '\n';
	}

	x.increment2();
	cout << "�J�E���g��2�{��" << x.value() << "���܂���" << '\n';
}
