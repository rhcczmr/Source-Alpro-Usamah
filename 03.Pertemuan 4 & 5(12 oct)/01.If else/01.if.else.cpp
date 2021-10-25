//Latihan if else
#include <iostream>
using namespace std;

int main()
{
    cout<<"=== Program Pembayaran ==="<<endl;
    int total_belanja;
    cout<<"Memasukkan total belanja   : ";
    cin>>total_belanja;

    //Menggunakan percobaan if else
    if(total_belanja >= 100000){
        cout<<"Selamat! anda mendapat hadiah"<<endl;

    }
    else{
        cout<<"Maaf! Anda belum bisa mendapat hadiah. Ayo belanja lagi"<<endl;

    }
    cout<<"Terimakasih sudah berbelanja di Toko kami"<<endl;
    return 0;
}