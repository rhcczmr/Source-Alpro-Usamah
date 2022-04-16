#include <iostream>
using namespace std;
int total,diskon;

void nasgor()
{
	int jmlh;
	int harga = 15000;
	cout<<"= = = Nasi goreng = = = "<<endl;
	cout<<"\n";
	cout<<"Masukkan jumlah    = ";
	cin>>jmlh;
	if(jmlh == 2){
		diskon = harga * jmlh * 5/100;

		total =  harga * jmlh - diskon;
		
	}
	else if(jmlh >= 3){
		diskon = harga * jmlh * 10/100;

		total =  harga * jmlh - diskon;
	}
		
	else{
		total = harga * jmlh;
	}
	system("cls");

}


void lalap()
{
	int jmlh,diskon;
	int harga = 18000;
	cout<<"= = = Lalapan = = = "<<endl;
	cout<<"\n";
	cout<<"Masukkan jumlah    = ";
	cin>>jmlh;
	if(jmlh >= 2){
		diskon = harga * jmlh * 5/100;
		total =  harga * jmlh - diskon;
		

	}else{
		total = harga * jmlh;
	}
	
}
void eJeruk()
{
	int jmlh,diskon;
	int harga = 7000;
	cout<<"= = = Es Jeruk = = = "<<endl;
	cout<<"\n";
	cout<<"Masukkan jumlah    = ";
	cin>>jmlh;
	if(jmlh == 3){
		diskon = harga * jmlh * 10/100;
		total = harga * jmlh  - diskon;

	}else{
		total = harga * jmlh;
	}
	system("cls");
}

void bayar()
{
	int pembayaran,diskon;

	cout<<"= = = Metode Pembayaran = = = "<<endl;
	cout<<"1. E-money"<<endl;
	cout<<"2. Cash"<<endl;
	cout<<"Masukkan pilihan anda = ";
	cin>>pembayaran;
	

	if(pembayaran == 1){
		diskon = total * 5/100;
		total = total - diskon;
		cout<<"Total pembayaran = Rp."<<total<<endl;
	}else{
		cout<<"Total pembayaran = Rp."<<total<<endl;
	}



}

int main()
{
	int pilihan;
	menu:
	cout<<"= = = WM. UTS = = = "<<endl;
	cout<<"\n";
	cout<<"        MENU          "<<endl;
	cout<<"\n";
	cout<<"1. Nasi Goreng   15.000"<<endl;
	cout<<"2. Lalapan       18.000"<<endl;
	cout<<"3. Es jeruk      7.000"<<endl;
	cout<<"4. Bayar "<<endl;
	cout<<"\n";
	cout<<"Diskon 10% setiap pembelian 3 minuman "<<endl;
	cout<<"Diskon 5% setiap pembelian 2 porsi nasi goreng "<<endl;
	cout<<"Diskon 10% setiap pembelian lebih dari 3 porsi nasi goreng "<<endl;
	cout<<"Diskon 5% setiap pembelian lebih dari 2 porsi lalapan "<<endl;
	cout<<"Diskon 5% setiap melakukan pembayaran dengan E-money"<<endl;
	cout<<"\n";
	cout<<"Masukkan pilihan anda [1/2/3/4] = ";
	cin>>pilihan;
    

    if(pilihan == 1){
         system("cls");
         nasgor();
         goto menu;



    }else if(pilihan == 2){
        system("cls");
        lalap();
        goto menu;

    }
    else if(pilihan == 3){
        system("cls");
        eJeruk();
        goto menu;
    }
    else if(pilihan == 4){
        system("cls");
        bayar();
    }
       
    
	
}
