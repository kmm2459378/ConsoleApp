// �T�l�̓_����ǂݍ���ō��v�_�E���ϓ_��\��
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	const int NINZU = 80;
	int tensu[NINZU];		// �T�l�̓_��
	int sum = 0;		// ���v
	int max ,min;
	
	srand(time(NULL));

	cout << "5�l�̓_���̍��v�_�ƕ��ϓ_�����߂܂��B\n";
	for (int i = 0; i < NINZU; i++) {
		cout << i + 1 << "�Ԃ̓_���́F";
		tensu[i] = rand() % 101;// tensu[i]��ǂݍ����
		cout << tensu[i] << "�_�ł�\n";
		

		sum += tensu[i];		    // sum��tensu[i]��������
	}
	max = tensu[0];
	min = tensu[0];
	for (int i = 1; i < NINZU; i++) {
		if (max < tensu[i])
			max = tensu[i];
		else if (min > tensu[i])
			min = tensu[i];
	}
	cout << "���v��" << sum << "�_�ł��B\n";
	cout << "���ς�" << static_cast<double>(sum) / NINZU << "�_�ł��B\n";
	cout << "�ő��" <<  max << "�_�ł��B\n"; 
	cout << "�Œ��" << min << "�_�ł��B\n";
}
