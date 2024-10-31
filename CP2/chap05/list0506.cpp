// ５人の点数を読み込んで合計点・平均点を表示
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	const int NINZU = 80;
	int tensu[NINZU];		// ５人の点数
	int sum = 0;		// 合計
	int max ,min;
	
	srand(time(NULL));

	cout << "5人の点数の合計点と平均点を求めます。\n";
	for (int i = 0; i < NINZU; i++) {
		cout << i + 1 << "番の点数は：";
		tensu[i] = rand() % 101;// tensu[i]を読み込んで
		cout << tensu[i] << "点です\n";
		

		sum += tensu[i];		    // sumにtensu[i]を加える
	}
	max = tensu[0];
	min = tensu[0];
	for (int i = 1; i < NINZU; i++) {
		if (max < tensu[i])
			max = tensu[i];
		else if (min > tensu[i])
			min = tensu[i];
	}
	cout << "合計は" << sum << "点です。\n";
	cout << "平均は" << static_cast<double>(sum) / NINZU << "点です。\n";
	cout << "最大は" <<  max << "点です。\n"; 
	cout << "最低は" << min << "点です。\n";
}
