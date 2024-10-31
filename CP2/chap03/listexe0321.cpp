// 読み込んだ整数を加算（9999が入力されると強制終了）

#include <iostream>

using namespace std;

int main()
{
	
      int n;
	cout << "面積は:";
	cin >> n;
	//cout << "9999で強制終了します。\n";

	
		
	for (int i = 1; i <= (n*2); i++) {
		
		//if (i * i > n) break;
		if ((n*2) % i != 0) continue;
		cout <<"0.5x" << i << "x" << ((n * 2) / i) << '\n';
	}
	


	;
}
