// �ǂݍ��񂾐��������Z�i���v��1,000�𒴂��Ȃ��͈͂ŉ��Z����j

#include <iostream>

using namespace std;

int main()
{
	int n;			// ���Z�����
	cout << "���������Z���܂��B\n";
	cout << "�����Z���܂����F";
	cin >> n;

	int sum = 1;	// ���v�l
	for (int i = 0; i < n; i++) {
		int t;
		cout << "�����F";
		cin >> t;
		if (sum * t > 10000) {
			cout << "\a���v��1,0000�𒴂��܂����B\n�Ō�̐��l�͖������܂��B\n";
			break;
		}
		sum *= t;
	}
	if(n == 0)
	cout << "���v��" << sum-1 << "�ł��B\n";
	else
	cout << "���v��" << sum << "�ł��B\n";
}
