// �z��ɂ�镶����ƃ|�C���^�ɂ�镶����

#include <iostream>

using namespace std;

int main()
{
    char a[][5] = {"LISP", "C", "Ada"};		// �z��ɂ�镶����̔z��
	const char* p[]   = {"PAUL", "X", "MAC"};		// �|�C���^�ɂ�镶����̔z��

	a[1][1] = '+';
	a[1][2] = '+';
	p[0] = "Stroustrup";
	for (int i = 0; i < 3; i++)
		cout << "a[" << i << "] = \"" << a[i] << "\"\n";

	for (int i = 0; i < 3; i++)
		cout << "p[" << i << "] = \"" << p[i] << "\"\n";
}
