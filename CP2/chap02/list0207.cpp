// �ǂݍ��񂾐����l�̌����i�[���^�P���^�Q���ȏ�j�𔻒�

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "�����l�F";
	cin >> n;

	if (n == 0) 								// �[��
		cout << "���̒l�̓[���ł��B\n";
	else{

		if (n >= -9) {
		if (n <= 9) 
		cout << "���̒l�͂P���ł��B\n";// �P��
		else		
		cout << "���̒l��2���ł��B\n";
		}				// �P��
		else 									// �Q���ȏ�
		cout << "���̒l�͂Q���ȏ�ł��B\n";
	}
   
}
