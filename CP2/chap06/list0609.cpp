// �E�������p�̒��p�O�p�`��\���i�֐��Łj

#include <iostream>

using namespace std;

//--- ����c��n�A���\�� ---//
void put_nchar(int n, char c)
{
	while (n-- > 0)
		cout << c;
}

int main()
{
	int n;

	cout << "�E�����p�̎O�p�`��\�����܂��B\n";
	cout << "�i���́F";
	cin >> n;

	for (int i = 0; i <= n; i++) {	// �S����n�s
		put_nchar(i, ' ');		// ����' '��n - i�\��
		if()
		put_nchar(n-i, '+');// ����'+'��i�\��
		cout << '\n';				// ���s����
	}
}
