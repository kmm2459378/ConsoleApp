// ��l�̍ő�l�E�O�l�̍ő�l�����߂�֐��i���d��`�j

#include <iostream>

using namespace std;

//--- a, b�̍ő�l��ԋp ---//
 int  inline max(int a, int b)
{
	return a > b ? a : b;
}

//--- a, b, c�̍ő�l��ԋp ---//
int max(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int max(int a, int b, int c, int d)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	return max;
}

int main()
{
	int x, y, z, zz;

	cout << "x�̒l�F";
	cin >> x;

	cout << "y�̒l�F";
	cin >> y;

	// ��l�̍ő�l
	cout << "x��y�̍ő�l��" << max(x, y) << "�ł��B\n";

	cout << "z�̒l�F";
	cin >> z;

	cout << "zz�̒l�F";
	cin >> zz;


	// �O�l�̍ő�l
	cout << "x, y, z�̍ő�l��" << max(x, y, z) << "�ł��B\n";

	// �O�l�̍ő�l
	cout << "x, y, z, zz�̍ő�l��" << max(x, y, z, zz) << "�ł��B\n";
}
