// 受け取った文字列中の小文字を大文字に変換して表示

#include <cctype>
#include <iostream>

using namespace std;

//--- 文字列sを表示（小文字は大文字に変換）---//
void put_upper(const char s[])
{
	for (int i = 0; i < 1; i++)
		cout << static_cast<char>(toupper(s[i]));
}

void put_lower(const char s[])
{
	for (int i = 1; s[i]; i++)
		cout << static_cast<char>(tolower(s[i]));
}

int main()
{
	char str[36];
	cout << "文字列：";
	cin >> str;
	/*cout << "まずは大文字に変換\n";*/
	cout << "最初の1文字目だけ大文字、それ以降小文字";
	put_upper(str);
	/*cout << "\n\n";

	cout << "次に小文字に変換\n";*/
	put_lower(str);
	cout << "\n\n";
}
