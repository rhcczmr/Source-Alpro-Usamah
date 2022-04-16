#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int tinggi,b,i;
	
	cout<<"Masukkan tinggi segitiga : ";
	cin>>tinggi;
	
	cout<<endl;
	cout<<"Segitiga siku -siku dengan tinggi " <<tinggi<<endl;
	
	
	while(i <= tinggi){
	    i++;
		b = 1;
		while(b <= i){
			cout<<"*";
			b++;
		}
		cout<<endl;
	}
	
	return 0;
	
}
		
		
		

