// 配列の全要素をコピーして表示

#include <iostream>

using namespace std;

int main()
{
	const int n = 5;	// 配列aとbの要素数
	int a[n];			// コピー元配列
	int b[n] = {0};     // コピー先配列（全要素を0で初期化）
	
	for (int i = 0; i < n; i++) {	// 配列aの要素に値を読み込む
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
	int c = 0;

// 配列aの全要素を配列bにコピー
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
       b[c] = a[i];
	    c++;
	 }
    
	}
		

    // 配列bの全要素の値を表示
	for (int i = 0; i < c; i++) {
	   cout << "b[" << i << "] = " << b[i] << '\n';
	}		
		
}
