// 配列による文字列の書きかえ

#include <iostream>

using namespace std;

int main()
{
    const char* s = "ABC";

	cout << "s = \"" << s << "\"\n";

	s = "wertyui";
	cout << "s = \"" << s << "\"\n";
}
