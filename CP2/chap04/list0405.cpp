// �����ƕ����R�[�h��\��

#include <cctype>
#include <climits>
#include <iostream>

using namespace std;

int main()
{   
	cout << "���̏����n�̕����ƕ����R�[�h\n";
	
	for ( char i = 0; ; i++) {
		switch (i) {
		 case '\a' : cout << "\\a";  break;
		 case '\b' : cout << "\\b";  break;
		 case '\f' : cout << "\\f";  break;
		 case '\n' : cout << "\\n";  break;
		 case '\r' : cout << "\\r";  break;
		 case '\t' : cout << "\\t";  break;
		 case '\v' : cout << "\\v";  break;
		 default   : cout << ' ' << (isprint(i) ? i : ' ');
		}
		// �����^�ɃL���X�g�������̂�16�i���ŕ\��
		cout << ' ' << hex << int(i) ;
	
	

	if (isdigit(i))
		cout << "10�i��";
	if (islower(i))
		cout << "10�i��";	
	if (isupper(i))
		cout << "10�i��";
	cout << '\n';
	if (i == CHAR_MAX) break;
	}
}