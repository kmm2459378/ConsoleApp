// �ǂݍ��񂾐����l�̌����i�Q���ȏォ�ǂ����j�𔻒�

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "�����l�F";
	cin >> n;

	if (n <= -10) 
	    cout << "���̒l�͂Q���ȏ�ł��B\n";// �Q���ȏ�
	else
		if (n >= 10)		
		cout << "���̒l�͂Q���ȏ�ł��B\n";// �Q���ȏ�
	else				
	    cout << "���̒l�͂Q�������ł��B\n";// �Q������		
		
}
