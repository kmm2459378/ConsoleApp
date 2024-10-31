// アドレス演算子と間接参照演算子

#include <iostream>

using namespace std;

int main()
{
	int x = 123, y = 567, sw, z = 300;

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "z = " << z << '\n';
	do {
         cout << "値を変更する変数[0…x / 1…y / 2…z]：";
		 cin >> sw;
	} while (sw < 0 || sw > 2);
	
	

	int* ptr;
	if (sw == 0)
		ptr = &x;	// ptrはxを指す
	else if(sw == 1)
		ptr = &y;	// ptrはyを指す
	else 
		ptr = &z;	// ptrはyを指す
	*ptr = 999;

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "z = " << z << '\n';
}
