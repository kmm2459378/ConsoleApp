// 銀行口座クラス（第３版：メンバ関数の定義を分離）とその利用例

#include <string>
#include <iostream>

using namespace std;

class Account {
	string full_name;		// 名義氏名
	string number;			// 口座番号
	long crnt_balance;		// 預金残高

public:
	Account(string name, string num, long amnt);	// コンストラクタ

	string name()  { return full_name; }			// 名義氏名を調べる
	string no()    { return number; }				// 口座番号を調べる
	long balance() { return crnt_balance; }			// 預金残高を調べる

	void deposit(long amnt);						// 預ける
	void withdraw(long amnt);						// おろす
	void double_();
};

//--- コンストラクタ ---//
Account::Account(string name, string num, long amnt)
{
	full_name = name;		// 名義氏名
	number = num;			// 口座番号
	crnt_balance = amnt;	// 預金残高
}

//--- 預ける ---//
void Account::deposit(long amnt)
{
	crnt_balance += amnt;
}

//--- おろす ---//
void Account::withdraw(long amnt)
{
	crnt_balance -= amnt;
}

void Account::double_() 
{
	crnt_balance *= 2;
}

int main()
{
	Account suzuki("鈴木龍一", "12345678", 1000);		// 鈴木君の口座
	Account takeda("武田浩文", "87654321",  200);		// 武田君の口座

	suzuki.withdraw(200);			// 鈴木君が200円おろす
	takeda.deposit(100);			// 武田君が100円預ける

	cout << "■鈴木君の口座：\"" << suzuki.name() << "\" (" << suzuki.no()
		 << ") " << suzuki.balance() << "円\n";

	cout << "■武田君の口座：\"" << takeda.name() << "\" (" << takeda.no()
		 << ") " << takeda.balance() << "円\n";

	takeda.double_();

	cout << "■鈴木君の口座：\"" << suzuki.name() << "\" (" << suzuki.no()
		<< ") " << suzuki.balance() << "円\n";

	cout << "■武田君の口座：\"" << takeda.name() << "\" (" << takeda.no()
		<< ") " << takeda.balance() << "円\n";
}
