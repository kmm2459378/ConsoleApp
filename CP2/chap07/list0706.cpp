// ��̐����l�̘a�Ɛς��֐��ɂ���ċ��߂�

#include <iostream>

using namespace std;

//--- x��y�̘a�Ɛς�*sum��*mul�ɋ��߂� ---//
void sum_mul(int x, int y, int* sum, int* mul, int* deff)
{
	*sum = x + y;
	*mul = x * y;
	/*if (x > y)
		*deff = x - y;
	else
		*deff = y - x;*/
	*deff = x > y ? x - y : y - x;
}

int main()
{
	int a, b;
	int wa = 0, seki = 0, sa = 0;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	sum_mul(a, b, &wa, &seki, &sa);		// a��b�̘a�Ɛς����߂�

	cout << "�a��" << wa   << "�ł��B\n";
	cout << "�ς�" << seki << "�ł��B\n";
	cout << "����" << sa << "�ł��B\n";
}
