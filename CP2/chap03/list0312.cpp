// �ǂݍ��񂾐����l�̑S�񐔂�\��

#include <iostream>

using namespace std;

int main()
{
	int n;
	int m(0);
	cout << "�����l�F";
	cin >> n;
	for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
          cout << i << '\n';
		  m++;
		}
	}
		if (m == 2) {
          cout << n << "�͑f���ł�\n";
		}
	cout << n << "�̖񐔂�" << m << "�ł�";
     
}
