// �O�̐����l�̍ő�l�����߂�i�֐��Łj

#include <iostream>

using namespace std;

//--- a, b, c�̍ő�l��ԋp ---//
int max(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int min(int a, int b, int c)
{
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}
int main()
{
	int a, b, c;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;
	cout << "����c�F";   cin >> c;

	cout << "�ő�l��" << max(a, b, c) << "�ł��B\n";
	cout << "�ŏ��l��" << min(a, b, c) << "�ł��B\n";
}
