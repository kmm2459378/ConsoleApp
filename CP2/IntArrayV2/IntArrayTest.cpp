// �����z��N���XIntArray�i��P�Łj�̗��p��

#include <iostream>
#include "IntArray.h"

using namespace std;

int num_div(int n) 
{
	if (n == 0) return 0;
	if (n == 1)  return 1;

	int cnt_ = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			
		cnt_++;
	}
	return cnt_;
}


int main()
{
	int n;

	cout << "�v�f������͂���F";
	cin >> n;

	IntArray x(n);	// �v�f��n�̔z��

	for (int i = 0; i < x.size(); i++)	 // �e�v�f�ɒl����
		x[i] = num_div(i);

	for (int i = 0; i < x.size(); i++)					// �e�v�f�̒l��\��
		cout << "x[" << i << "] = " << x[i] << '\n';
}
