// 選ばれた動物の鳴き声を表示

#include <iostream>

using namespace std;

int main()
{
	enum animal { Spring, Summer, Autumn, Winter, Close };
	int type;

	do {
		cout << "0…春　1…夏　2…秋　3…冬　４…終了：\n";
		cin >> type;
	} while (type < Spring || type > Close);

	if (type != Close) {
		animal selected = static_cast<animal>(type);
		switch (selected) {
		 case Spring : cout << "春はあけぼの\n";	break;
		 case Summer : cout << "夏は夜\n";	break;
		 case Autumn : cout << "秋は夕暮れ\n";	break;
		 case Winter : cout << "冬は務めて\n";	break;
		}
	}
}
