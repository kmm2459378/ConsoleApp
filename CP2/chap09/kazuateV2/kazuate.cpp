// �����ăQ�[���i��Q�ŁF���C�����j

#include <iostream>
#include "kazuate.h"

using namespace std;

int max_no = 9;			// ���Ă�ׂ����̍ő�l
int cnt_ = 0;
int main()
{
	initialize();		// ������
	cout << "�����ăQ�[���J�n�I\n";

	do {
		gen_no();		// ���i���Ă�ׂ����j�̍쐬
		int hantei;
		do {
			hantei = judge(input());	// �𓚂̔���
			if (hantei == 1)
				cout << "\a�����Ə������ł���B\n";
			else if (hantei == 2)
				cout << "\a�����Ƃ����Ə������ł���B\n";
			else if (hantei == 3)
				cout << "\a�����Ƒ傫���ł���B\n";
			else if (hantei == 4)
				cout << "\a�����Ƃ����Ƒ傫���ł���B\n";
			cnt_++;
		} while (hantei != 0);
		cout << "�����ł��B\n";
		cout << "�M����" << answer_number() << "��ڂŐ������܂���\n";
	} while (confirm_retry());
}
