// �z��̊e�v�f��1, 2, 3, 4, 5�������ĕ\���ifor���j

#include <iostream>

using namespace std;

int main()
{
	const int ninzu = 8;		// �v�f�^��int�^�ŗv�f��5�̔z��
	int a[ninzu];
	for (int i = 0; i < ninzu; i++)
		a[i] = (ninzu-i);

	for (int i = 0; i < 8; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}
