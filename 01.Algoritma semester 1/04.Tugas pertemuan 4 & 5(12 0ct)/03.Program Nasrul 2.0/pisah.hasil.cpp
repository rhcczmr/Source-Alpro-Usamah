#include <iostream>
using namespace std;

int main()
{
	char metode;
	int uang,permen;
	int dpt = 4;
	int set = 2;
	int per = 1;
	
	cout<<"*===========================================================*"<<endl;
	cout<<"|                                                           |"<<endl;
	cout<<"| Nasrul Ingin Membeli Permen dengan Uang Rp.5.000 miliknya |"<<endl;
	cout<<"| Dan dia juga bisa menukar 3 permen untuk 1 permen         | "<<endl;
	cout<<"|                                                           |"<<endl;
	cout<<"*===========================================================*"<<endl;
    cout<<"\n";
	cout<< "Ingin beli atau tukar ?  [b/t]    : ";
	cin>>metode;

	switch (metode)
	{
	case 'b':
	     cout<<"Berapa uang Nasrul                : ";
		 cin>>uang;

		 if(uang % 1000 == 0){
		   uang/=1000;
           cout<<"Nasrul mendapatkan                : "<<uang*dpt<<" permen"<<endl;
		 }
		 else if(uang % 500 == 0){
			 uang/=500;
			 cout<<"Nasrul mendapatkan                : "<<uang*set<<" permen"<<endl;
		 }
		 else if(uang % 250 == 0){
			 uang/=250;
			 cout<<"Nasrul mendapatkan                : "<<uang*per<<" permen"<<endl;
		 }
		break;
	
	
	case 't':
	     cout<<"Mau tukar berapa permen           : ";
		 cin>>permen;
		 
		 if(permen % 3 != 0){
		 cout<<"Permen hanya bisa ditukar dengan kelipatan 3,6,9 dst.."<<endl;
		 }
		 else if(permen % 3 == 0){
			 permen/=3;
			 cout<<"Nasrul mendapatkan                : "<<permen<<" permen dari hasil penukaran"<<endl;
		 }
		 break;
		 
	default:
	     cout<<"PILIH [b/t] saja,,jangan cari perkara baru   !! "<<endl;
		break;
	}

	return 0;
}
