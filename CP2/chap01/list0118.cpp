// 名前を読み込んで挨拶する

#include <string>
#include <iostream>

//using namespace std;

int main()
{
	std::string name;	// 名前

	std::cout << "お名前は：";		// 名前の入力を促す
	std::cin >> name;				// 名前を読み込む（スペースは無視）

	std::cout << "こんにちは" << name << "さん。\n";		// 挨拶する
}
