// �ǂݍ��񂾌��̋G�߂�\��

#include <iostream>

using namespace std;

int main()
{
	int month;

	cout << "�G�߂����߂܂��B\n�����ł����F";
	cin >> month;

	if (month > 2) {
		if (month < 6)		
			cout << "����͏t�ł��B\n";// 3���E 4���E 5��
	
	else if (month > 5){
		 if ( month < 9)	
			cout << "����͉Ăł��B\n";// 6���E 7���E 8��
	}
	else if (month > 8) {
		if (month < 12)
		cout << "����͏H�ł��B\n";	// 9���E10���E11��
		else
			cout << "����Ȍ��͑��݂��܂���B\n";
	}
	}
	else {
		if (month == 12)	     // 12���E1���E2��
			cout << "����͓~�ł��B\n";
		else if (month == 1)
			cout << "����͓~�ł��B\n";
		else if (month == 2)
			cout << "����͓~�ł��B\n";
		else
		cout << "����Ȍ��͑��݂��܂���B\n";
	}
	
}
