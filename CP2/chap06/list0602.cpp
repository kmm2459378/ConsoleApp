// �R�l�̐��w�E�p��̍ő�l�����߂ĕ\���i�֐��Łj

#include <iostream>

using namespace std;

//--- a, b, c�̍ő�l��ԋp ---//
int max(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main()
{
	int math[3];	// ���w
	int eng[3];		// �p��
	int jap[3];
	for (int i = 0; i < 3; i++) {	// �_���̓Ǎ���
		cout << "[" << i + 1 << "] ";
		cout << "���w�F";		cin >> math[i];
		cout << "    �p��F";	cin >> eng[i];
		cout << "    ����F";	cin >> jap[i];
	}

	int max_math = max(math[0], math[1], math[2]);	// ���w�̍ō��_
	int max_eng  = max(eng[0],  eng[1],  eng[2]);	// �p��̍ō��_
	int max_jap = max(jap[0], jap[1], jap[2]);	// ����̍ō��_

	cout << "���w�̍ō��_��" << max_math << "�ł��B\n";
	cout << "�p��̍ō��_��" << max_eng  << "�ł��B\n";
	cout << "����̍ō��_��" << max_jap << "�ł��B\n";
}
