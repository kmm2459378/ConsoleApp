// �����z��N���XIntArray�i��P�Łj�̗��p��

#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
	int n;

	cout << "�v�f������͂���F";
	cin >> n;

	DoubleArray x(n);	// �v�f��n�̔z��
	DoubleArray y = 6;

	for (double i = 0.5; i < x.size(); i++)					// �e�v�f�ɒl����
		x[i] = i * 0.2;

	for (int i = 0; i < x.size(); i++)					// �e�v�f�̒l��\��
		cout << "x[" << i << "] = " << x[i] << '\n';

	for (int i = 0; i < y.size(); i++)					// �e�v�f�ɒl����
		y[i] = i;

	for (int i = 0; i < y.size(); i++)					// �e�v�f�̒l��\��
		cout << "x[" << i << "] = " << y[i] << '\n';
}
