#include <iostream>
using namespace std;

int main() {
	float x,y, hasil;
	char aritmatika;

	


	cout << "Masukkan Nilai Pertama : ";
	cin >> x;
	cout << "Masukkan Operator  : ";
	cin >> aritmatika;
	cout << "Masukkan Nilai Kedua : ";
	cin >> y;

	switch (aritmatika)
	{
	case '+':
		hasil = x + y;
		cout << "Hasil  : ";
		cout << hasil << endl;
		break;
	case '-':
		hasil = x - y;
		cout << "Hasil  : ";
		cout  << hasil << endl;
		break;
	case '*':
		hasil = x * y;
		cout << "Hasil  : ";
		cout << hasil << endl;
		break;
	case '/':
		hasil = x /y;
		cout << "Hasil  : ";
		cout << hasil << endl;
		break;
	default:
		cout << "INPUT YANG BENAR !! " << endl;
	}
	
	return 0;

}