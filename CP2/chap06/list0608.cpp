// ���������p�̒��p�O�p�`��\���i�֐��Łj

#include <iostream>

using namespace std;

//--- ����'*'��n�A���\�� ---//
void put_stars(int n)
{
	while (n-- > 0)
		cout << '+';
}

int main()
{
	int n;

	cout << "�������p�̎O�p�`��\�����܂��B\n";
	cout << "�i���́F";
	cin >> n;

	for (int i = 0; i <= n; i++) {
		put_stars(n-i);
		cout << '\n';
	}
}
