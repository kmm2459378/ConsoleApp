// ���`�T���i��P�Łj

#include <iostream>

using namespace std;

//--- �z��a�̐擪n�̗v�f����lkey����`�T���i��P�Łj---//
int seq_search(int* a, int n, int key)
{
	for (int i = 0; i < n; i++)
		if (a[i] == key)		// �T������
			return i;
	return -1;					// �T�����s
}

int main(void)
{
	int key, idx;
	int x[8];
	int x_size = sizeof(x) / sizeof(x[0]);		// �z��x�̗v�f��

	for (int i = 0; i < x_size; i++) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}
	cout << "�T���l�́F";
	cin >> key;

	idx = seq_search(x, x_size, key);
	if(idx != -1)
		cout << "���̒l�����v�f��x[" << idx << "]�ł��B\n";
	else
		cout << "������܂���ł����B\n";
}
