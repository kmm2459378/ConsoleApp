// 自動記憶域期間と静的記憶域期間

#include <iostream>

using namespace std;

int fx = 0;	
int _a[7];// 静的記憶域期間＋ファイル有効範囲

void func()
{
	static int sx = 0;	// 静的記憶域期間＋ブロック有効範囲
	int 	   ax = 0;	// 自動記憶域期間＋ブロック有効範囲
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
