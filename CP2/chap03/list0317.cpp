// �ǂݍ��񂾐��������Z�i���̒l�͉��Z���Ȃ��j

#include <iostream>

using namespace std;

int main()
{
	int n;			// ���Z�����
	cout << "���������Z���܂��B\n";
	cout << "�����Z���܂����F";
	cin >> n;

	int sum = 0;	// ���v�l
	for (int i = 0; i < n; i++) {
		int t;
		cout << "�����F";
		cin >> t;
		
		if (t < 0) {
			cout << "\a���̐��͉��Z���܂���B\n";
			continue;
		}
		if ( sum += t > 1000) {
			cout << "\n���v��1000�������܂����B�Ō�̐��l�͖������܂�\n";
				break;
		}
		sum += t;
	}
	cout << "���v��" << sum << "�ł��B\n";
}
