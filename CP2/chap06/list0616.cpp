// �O�̐����l�������Ƀ\�[�g

#include <iostream>

using namespace std;

//--- ����x��y�̒l������ ---//
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

//--- ����a, b, c, d�������Ƀ\�[�g ---//
void sort(int& a, int& b, int& c, int& d)
{
	if (a > b) swap(a, b);  //a3 b4
	if (b > c) swap(b, c);  //b2 c4
	if (c > d) swap(c, d);  //c1 d4
	if (a > c) swap(a, c);
}

int main()
{
	int a, b, c, d;

	cout << "�ϐ�a�F";   cin >> a;
	cout << "�ϐ�b�F";   cin >> b;
	cout << "�ϐ�c�F";   cin >> c;
	cout << "�ϐ�c�F";   cin >> d;

	sort(a, b, c, d);			// a, b, c�������Ƀ\�[�g

	cout << "����a, b, c�������ɕ��ׂ����܂����B\n";
	cout << "�ϐ�a�̒l��" << a << "�ł��B\n";
	cout << "�ϐ�b�̒l��" << b << "�ł��B\n";
	cout << "�ϐ�c�̒l��" << c << "�ł��B\n";
	cout << "�ϐ�c�̒l��" << d << "�ł��B\n";
}
