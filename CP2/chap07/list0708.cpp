// 配列の要素の値とアドレスを表示

#include <iostream>

using namespace std;

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int* p = a;		// pはa[0]を指す

	for (int i = 0; i < 6; i++)			// 要素の値を表示
		cout << "a[" << i << "] = " << a[i] << "  *(a+" << i << ") = " << *(a + i) << "  "
		     << "p[" << i << "] = " << p[i] << "  *(p+" << i << ") = " << *(p + i) << "\n";

	for (int i = 0; i < 6; i++)			// 要素へのポインタを表示
		cout << "&a[" << i << "] = " << &a[i] << "  a+" << i << " = " << a + i << "  "
		     << "&p[" << i << "] = " << &p[i] << "  p+" << i << " = " << p + i << "\n";
}
