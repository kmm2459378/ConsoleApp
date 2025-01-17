// 二つの名前空間とusing宣言

#include <iostream>

using namespace std;

namespace English {

	int x = 1;

	void print_x()
	{
		cout << "The value of x is " << x << "\n";
	}

	void hello()
	{
		cout << "Hello!\n";
	}
}

namespace Japanese {

	int x = 2;

	void print_x()
	{
		cout << "変数xの値は" << x << "です。\n";
	}

	void hello()
	{
		cout << "こんにちは！\n";
	}
}
namespace Kumamoto {
	int x = 3;

	void print_x()
	{
		cout << "変数xの値は" << x << "です。\n";
	}

	void hello()
	{
		cout << "こんちわ！\n";
	}
}

namespace ENG = English;
namespace JPN = Japanese;
namespace KMT = Kumamoto;

int main()
{
	using Japanese::hello;	// Japanese名前空間の利用を宣言
	using KMT::print_x;

	cout << "English::x = " << English::x << '\n';
	cout << "English::x = " << ENG::x << '\n';
	cout << "Japanese::x = " << Japanese::x << '\n';
	cout << "Japanese::x = " << JPN::x << '\n';

	English::hello();
	hello();	// Japanese::は不要
	print_x();
}
