// �ǂݍ��񂾒l�ɉ����ăW�����P���̎��\��
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int hand;

	cout << "���I��ł��������i0�c�O�[�^1�c�`���L�^2�c�p�[�j�F";
	cin >> hand;
	if (hand < 0 || hand > 2) {
       cout << "�G���[";
	return 0;
	}
	cout << "���Ȃ���";
	switch (hand) {
	case 0: cout << "�O�[";	   break;
	case 1: cout << "�`���L";   break;
	case 2: cout << "�p�[";	   break;
	}
	cout << "��I�т܂����B\n";
	srand(time(NULL));
	int Computer = rand() % 3;
	cout << "�R���s���[�^�[��";
	switch (Computer) {
	 case 0: cout << "�O�[";	   break;
	 case 1: cout << "�`���L";   break;
	 case 2: cout << "�p�[";	   break;
	}
	cout << "��I�т܂����B\n";
	if (hand == Computer ) {
		cout << "�������ł���";
	}
	 if ((hand == 0 && Computer == 1)|| (hand == 1 && Computer == 2) || (hand == 2 && Computer == 0)) {
		cout << "���Ȃ��̏���";
	}
	 else if ((hand == 0 && Computer == 2) || (hand == 1 && Computer == 0) || (hand == 2 && Computer == 1)) {
		 cout << "���Ȃ��̕���";
	 }
	
}
