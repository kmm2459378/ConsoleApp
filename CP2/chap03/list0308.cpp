// ���̐����l��ǂݍ���ŋt���ɕ\��

#include <iostream>

using namespace std;

int main()
{
	int x;
	int i(0);
	int y(0);
	cout << "���̐����l���t���ɕ\�����܂��B\n";
	do {
		cout << "���̐����l�F";
		cin >> x;
	} while (x <= 0);
	cout << x;
	y = x;
	cout << "���t����ǂނ�";
	while (x > 0) {
		cout << x % 10;			// x�̍ŉ��ʌ���\��
		x /= 10;                // x��10�Ŋ���
		i++;
	}
	cout << "�ł��B\n";
	cout << y << "��" << i << "���ł��B\n";
}
