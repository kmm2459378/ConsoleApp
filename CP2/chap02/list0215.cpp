// �ǂݍ��񂾐����l��10�Ŋ���؂�邩

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "�����l�F";
	cin >> n;

	if (int m = n % 100) {
		cout << "���̒l��100�Ŋ���؂�܂���B\n";
		cout << "2�Ԗڂ̌���" << m /10 << "�ł��B\n";
		cout << "�ŉ��ʌ���" << m % 10<< "�ł��B\n";
	
	} else {
		cout << "���̒l��100�Ŋ���؂�܂��B\n";
	}
}
