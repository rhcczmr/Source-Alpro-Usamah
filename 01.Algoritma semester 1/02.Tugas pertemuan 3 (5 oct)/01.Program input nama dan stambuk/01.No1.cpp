#include <iostream>

using namespace std;

int main()
{
	string nama;
	string stamb; /*menggunakan string, karna
	              /apabila menggunakan int,meskipun
	              /sudah menambah unsigned hasilnya
	              /hanya mampu menampung 10 digit*/
	              
	cout<<"Masukkan nama anda            :";
	getline (cin, nama);/*menggunakan getline agar
	                     apabila mau input nama lengkap
	                     semua akan terinput, dan hal 
	                     ini tidak bisa apabila hanya
	                     menggunakan " cin>> "saja*/
	
	cout<<"\n";// new line agar terlihat rapih
	
	cout<<"Masukkan nomer stambuk anda   :";
	cin>>stamb;
	cout<<"\n";
	
	cout<<"Selamat datang "<<nama<<" \nDengan nomer Stambuk "<<stamb<<","<<" \nHave a nice day  :)"<<endl;
	
	return 0;
	
}