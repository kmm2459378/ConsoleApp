// �����������p�̒��p�O�p�`��\��

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "�������p�̎O�p�`��\�����܂��B\n";
	cout << "�i���́F";
	cin >> n;

	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= (n-i); j++)	// i��'*'��\��
			cout << '*';
		cout << '\n';
	}

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)    // i��'*'��\��
            cout << '*';
        cout << '\n';
    }

    cout << "\n";
    cout << "�E�����p�̓񓙕ӎO�p�`���\�����܂��B\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)    // n-1��' '��\��
            cout << ' ';
        for (int j = 1; j <= n-i; j++)    // i��'*'��\��
            cout << '*';
        cout << '\n';
    }
}
