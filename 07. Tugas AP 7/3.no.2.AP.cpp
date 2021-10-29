#include <iostream>
#include <conio.h>

using namespace std;
int saldo=100000;

void setorr()
{
    int setor;
    cout<<"Masukkan Nominal Uang yang Ingin Anda Setor = Rp.";
    cin>>setor;
    cout<<"\n";
    saldo=saldo+setor;
    cout<<"* = = = = = TRANSAKSI BERHASIL = = = = = *"<<endl;
    cout<<"                                        "<<endl;
    cout<<"      Uang yang anda setorkan Rp."<<setor<<endl;
    cout<<"         Jumlah Saldo anda saat ini         "<<endl;
    cout<<"               Rp."<<saldo<<"                  "<<endl;
    cout<<"                                        "<<endl;
    cout<<"* = = = = = = = = = = = = = = = = = = = = *"<<endl;
    cout<<"\n"<<endl;
    
}

void ambil()
{
    int tarik;
    cout<<"Masukkan Nominal yang Ingin Anda Tarik = Rp.";
    cin>>tarik;
    saldo=saldo-tarik;
    cout<<"\n";
    if(saldo >=50000){
        cout<<"* = = = = = TRANSAKSI BERHASIL = = = = = *"<<endl;
        cout<<"                                        "<<endl;
        cout<<"      Uang yang anda tarik  Rp."<<tarik<<endl;
        cout<<"         Sisa  Saldo anda saat ini         "<<endl;
        cout<<"               Rp."<<saldo<<"                  "<<endl;
        cout<<"                                         "<<endl;
        cout<<"* = = = = = = = = = = = = = = = = = = = = *"<<endl;
        cout<<"\n";
    
    }
    else{
        cout<<">> Maaf Saldo Anda Tidak Cukup untuk Melakukan Transaksi Ini"<<endl;
        cout<<">> Mohon Segera Melakukan Isi Ulang Saldo Anda "<<endl;
        cout<<"\n";
    }
}

void keluar()
{   
    cout<<"     * = = = = = = = = = = = = = = *"<<endl;
    cout<<"     |                             |"<<endl;
    cout<<"     |         Terimakasih         |"<<endl;
    cout<<"     |                             |"<<endl;
    cout<<"     * = = = = = = = = = = = = = = *"<<endl;
};

int main()
{
    cout<<"            *===============================*"<<endl;
    cout<<"            |                               |"<<endl;
    cout<<"            |> > > BANK INDONESIA JAYA < < <|"<<endl;
    cout<<"            |                               |"<<endl;
    cout<<"            *===============================*"<<endl;

    cout<<"\n";
    cout<<"Saldo anda Rp."<<saldo<<"\n"<<endl;
    ara:
    int menu;
    
    cout<<"= = =  Menu Transaksi = = =             \n "<<endl;
    cout<<"1. Setor Tabungan     "<<endl;
    cout<<"2. Ambil Tabungan    "<<endl;
    cout<<"3. Keluar \n"<<endl;
    cout<<"Masukkan Pilihan Anda (1/2/3) : ";
    cin>>menu;

    switch (menu)
    {
        case 1:
        system ("cls");
        setorr();
        goto ara;
        break;

        case 2:
        system ("cls");
        ambil();
        goto ara;
        break;

        case 3:
        system ("cls");
        keluar();
    }
}

    


