// �z��̑S�v�f���R�s�[���ĕ\��

#include <iostream>

using namespace std;

int main()
{
	const int n = 5;	// �z��a��b�̗v�f��
	int a[n];			// �R�s�[���z��
	int b[n] = {0};     // �R�s�[��z��i�S�v�f��0�ŏ������j
	
	for (int i = 0; i < n; i++) {	// �z��a�̗v�f�ɒl��ǂݍ���
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
	int c = 0;

// �z��a�̑S�v�f��z��b�ɃR�s�[
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
       b[c] = a[i];
	    c++;
	 }
    
	}
		

    // �z��b�̑S�v�f�̒l��\��
	for (int i = 0; i < c; i++) {
	   cout << "b[" << i << "] = " << b[i] << '\n';
	}		
		
}
