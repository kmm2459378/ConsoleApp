// ��̐����l�̘a�Ɛς��֐��ɂ���ċ��߂�i�ԈႢ�j

#include <iostream>

using namespace std;

//--- x��y�̘a�Ɛς�sum��mul�ɋ��߂�i�ԈႢ�j---//
void sum_mul(int x, int y, int sum, int mul)
{
	sum = x + y;
	mul = x * y;
}

int main()
{
	int a, b;
	int wa = 0, seki = 0;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	sum_mul(a, b, wa, seki);		// a��b�̘a�Ɛς����߂�i�H�j

	cout << "�a��" << wa   << "�ł��B\n";
	cout << "�ς�" << seki << "�ł��B\n";
}
