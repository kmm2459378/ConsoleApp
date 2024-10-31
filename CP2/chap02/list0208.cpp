// 読み込んだ整数値の桁数（２桁以上かどうか）を判定

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値：";
	cin >> n;

	if (n <= -10) 
	    cout << "その値は２桁以上です。\n";// ２桁以上
	else
		if (n >= 10)		
		cout << "その値は２桁以上です。\n";// ２桁以上
	else				
	    cout << "その値は２桁未満です。\n";// ２桁未満		
		
}
