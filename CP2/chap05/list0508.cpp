// �z��̑S�v�f�ɗ����������ĕ\��

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));		// �����̎��������
	const int n = 5;		// �z��a�̗v�f��
	int a[n];				// �v�f�^��int�^�ŗv�f��n�̔z��

	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;		// 0�`9�̗�������

	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}
