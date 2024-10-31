// 読み込んだ値に応じてジャンケンの手を表示
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int hand;

	cout << "手を選んでください（0…グー／1…チョキ／2…パー）：";
	cin >> hand;
	if (hand < 0 || hand > 2) {
       cout << "エラー";
	return 0;
	}
	cout << "あなたは";
	switch (hand) {
	case 0: cout << "グー";	   break;
	case 1: cout << "チョキ";   break;
	case 2: cout << "パー";	   break;
	}
	cout << "を選びました。\n";
	srand(time(NULL));
	int Computer = rand() % 3;
	cout << "コンピューターは";
	switch (Computer) {
	 case 0: cout << "グー";	   break;
	 case 1: cout << "チョキ";   break;
	 case 2: cout << "パー";	   break;
	}
	cout << "を選びました。\n";
	if (hand == Computer ) {
		cout << "あいこでした";
	}
	 if ((hand == 0 && Computer == 1)|| (hand == 1 && Computer == 2) || (hand == 2 && Computer == 0)) {
		cout << "あなたの勝ち";
	}
	 else if ((hand == 0 && Computer == 2) || (hand == 1 && Computer == 0) || (hand == 2 && Computer == 1)) {
		 cout << "あなたの負け";
	 }
	
}
