// �A�h���X���Z�q�ƊԐڎQ�Ɖ��Z�q

#include <iostream>

using namespace std;

int main()
{
	int x = 123, y = 567, sw, z = 300;

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "z = " << z << '\n';
	do {
         cout << "�l��ύX����ϐ�[0�cx / 1�cy / 2�cz]�F";
		 cin >> sw;
	} while (sw < 0 || sw > 2);
	
	

	int* ptr;
	if (sw == 0)
		ptr = &x;	// ptr��x���w��
	else if(sw == 1)
		ptr = &y;	// ptr��y���w��
	else 
		ptr = &z;	// ptr��y���w��
	*ptr = 999;

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "z = " << z << '\n';
}
