// �����L������ԂƐÓI�L�������

#include <iostream>

using namespace std;

int fx = 0;	
int _a[7];// �ÓI�L������ԁ{�t�@�C���L���͈�

void func()
{
	static int sx = 0;	// �ÓI�L������ԁ{�u���b�N�L���͈�
	int 	   ax = 0;	// �����L������ԁ{�u���b�N�L���͈�
	static int _b[7];
	int        _c[7] = { 0 };
	fx++; sx++; ax++; 
	cout << fx << "  " << sx << "  " << ax << '\n';
}

int main()
{
	cout << "fx sx ax\n";
	cout << "--------\n";
	for (int i = 0; i < 8; i++)
		func();
	static int _b[7];
	int        _c[7] = { 0 };
	cout << '\n';
	for (int i = 0; i < 7; i++) {
		cout << "a[" << i << "]" << _a[i] << '\n';
	}

	for (int i = 0; i < 7; i++) {
		cout << "b[" << i << "]" << _b[i] << '\n';
	}
}
