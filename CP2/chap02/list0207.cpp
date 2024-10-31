// “Ç‚İ‚ñ‚¾®”’l‚ÌŒ…”iƒ[ƒ^‚PŒ…^‚QŒ…ˆÈãj‚ğ”»’è

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "®”’lF";
	cin >> n;

	if (n == 0) 								// ƒ[ƒ
		cout << "‚»‚Ì’l‚Íƒ[ƒ‚Å‚·B\n";
	else{

		if (n >= -9) {
		if (n <= 9) 
		cout << "‚»‚Ì’l‚Í‚PŒ…‚Å‚·B\n";// ‚PŒ…
		else		
		cout << "‚»‚Ì’l‚Í2Œ…‚Å‚·B\n";
		}				// ‚PŒ…
		else 									// ‚QŒ…ˆÈã
		cout << "‚»‚Ì’l‚Í‚QŒ…ˆÈã‚Å‚·B\n";
	}
   
}
