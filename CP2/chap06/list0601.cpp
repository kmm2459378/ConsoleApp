// �R�l�̐��w�E�p��̍ō��_�����߂ĕ\��

#include <iostream>

using namespace std;

int main()
{
	int math[3];	// ���w�̓_��
	int eng[3];		// �p��̓_��
	int jap[3];     // ����̓_��
	for (int i = 0; i < 3; i++) {	// �_���̓Ǎ���
		cout << "[" << i + 1 << "] ";
		cout << "���w�F";		cin >> math[i];
		cout << "    �p��F";	cin >> eng[i];
		cout << "    ����F";	cin >> jap[i];
	}

	int max_math = math[0];	  // ���w�̍ō��_
	if (math[1] > max_math) max_math = math[1];
	if (math[2] > max_math) max_math = math[2];

	int max_eng = eng[0];	  // �p��̍ō��_
	if (eng[1] > max_eng) max_eng = eng[1];
	if (eng[2] > max_eng) max_eng = eng[2];

	int max_jap = jap[0];	  // ����̍ō��_
	if (jap[1] > max_jap) max_jap= jap[1];
	if (jap[2] > max_jap) max_jap = jap[2];

	cout << "���w�̍ō��_��" << max_math << "�ł��B\n";
	cout << "�p��̍ō��_��" << max_eng  << "�ł��B\n";
	cout << "����̍ō��_��" << max_jap << "�ł��B\n";
}