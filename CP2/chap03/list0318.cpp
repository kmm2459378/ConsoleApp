// �ǂݍ��񂾐��������Z�i9999�����͂����Ƌ����I���j

#include <iostream>

using namespace std;

int main()
{
	int i(0);
	int n;
	int t;			// ���Z�����
	cout << "���������Z���܂��B\n";
	cout << "�����Z���܂����F";
	cin >> n;
	//cout << "9999�ŋ����I�����܂��B\n";

	int sum = 0;
		// ���v�l
	//for (int i = 0; i < n; i++) {
		
	    Exit:
		cout << "�����F";
		cin >> t;
		sum += t;
		
		if (i < (n-1)) {
            i++;
			goto Exit;
		}
			
		
	//}
	cout << "���v��" << sum << "�ł��B\n";


	;
}
