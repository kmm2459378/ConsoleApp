// n�s3��̂Q�����z��̑S�\���v�f�ɓ���l����

#include <iomanip>
#include <iostream>

using namespace std;

const int col_ = 5;

//---�gint��v�f�^�Ƃ���v�f��3�̔z��h��v�f�^�Ƃ���v�f��n�̔z�� ---//
//---                  �in�s3��̂Q�����z��j�̑S�\���v�f��v���� ---//
void fill(int (*a)[col_], int n, int v)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < col_; j++)
			a[i][j] = v;
}

int main(void)
{
	int no;
	int x[2][col_] = {0};
	int y[4][col_] = {0};

	cout << "�S�\���v�f�ɑ������l�F";
	cin >> no;

	fill(x, 2, no);		// x�̑S�\���v�f��no����
	fill(y, 4, (no*2));		// y�̑S�\���v�f��no����

	cout << "--- x ---\n";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < col_; j++)
			cout << setw(6) << x[i][j];
		cout << '\n';
	}

	cout << "--- y ---\n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < col_; j++)
			cout << setw(6) << y[i][j];
		cout << '\n';
	}
}
