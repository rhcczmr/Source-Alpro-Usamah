#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,b,tinggi;
	
	cout<<"Masukkan tinggi segitiga : ";
	cin>>tinggi;
	
	cout<<endl;
	cout<<"Segitiga siku -siku dengan tinggi " <<tinggi<<endl;
	
	a=0;
	do{
		a++;
		b = 1;
		do{
			b++;
			cout<<"*";
		}while(b<=a);
		cout<<endl;
	}while(a<=tinggi);
	
    getch();
    
}


