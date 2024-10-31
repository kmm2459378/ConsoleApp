// n行3列の２次元配列の全構成要素に同一値を代入

#include <iomanip>
#include <iostream>

using namespace std;

const int col_ = 5;

//---“intを要素型とする要素数3の配列”を要素型とする要素数nの配列 ---//
//---                  （n行3列の２次元配列）の全構成要素にvを代入 ---//
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

	cout << "全構成要素に代入する値：";
	cin >> no;

	fill(x, 2, no);		// xの全構成要素にnoを代入
	fill(y, 4, (no*2));		// yの全構成要素にnoを代入

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
