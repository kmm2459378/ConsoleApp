// ��̐����l�̏������ق��̒l�Ƒ傫���ق��̒l�����߂ĕ\��

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	int min, max;// �������ق��̒l�^�傫���ق��̒l

	if(a == b)
    cout << "2�̒l�͓������ł��B\n";
	else if (a < b) //{		// a��b��菬�������
		min = a,
		max = b,
	cout << "�������ق��̒l��" << min << "�ł��B\n",
    cout << "�傫���ق��̒l��" << max << "�ł��B\n";
	/* }*/ else //{			// �����łȂ����
		min = b,
		max = a,
	cout << "�������ق��̒l��" << min << "�ł��B\n",
	cout << "�傫���ق��̒l��" << max << "�ł��B\n";
	//}
	
	
}
