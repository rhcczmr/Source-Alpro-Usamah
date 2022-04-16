#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	int tinggi;
	
	cout<<"Masukkan tinggi segitiga : ";
	cin>>tinggi;
	
	cout<<endl;
	cout<<"Segitiga seiku -siku dengan tinggi " <<tinggi<<endl;
	
	for(int a=1; a<=tinggi; a++){   //perulangan untuk tinggi segitiga
		for(int b = 1; b <=a; b++){
			cout<<"*";
		}
		cout<<endl;
	}
		
		getch();
		
}
		

