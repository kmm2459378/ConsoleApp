// 名前を尋ねて挨拶（文字列の読込みと表示）

#include <iostream>

using namespace std;

int main()
{
	char name[36];

	cout << "お名前は：";
	/*cin >> name;*/
	cin.getline(name, 36, '\n');

	cout << "こんにちは、" << name << "さん!!\n";
}
