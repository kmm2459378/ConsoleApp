// �ǂݍ��񂾓�̐����l�̏������ق��̒l��\���i���̂P�Fif���j

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	int min, max;		// �������ق��̒l
	if (a < b) {
        min = a;
	    max = b;
	}
		
	else {
       min = b;
	   max = a;
	}
		
	cout << "�������ق��̒l��" << min << "�ł��B�����đ傫�����̒l��" << max <<"�ł��B\n";
}
