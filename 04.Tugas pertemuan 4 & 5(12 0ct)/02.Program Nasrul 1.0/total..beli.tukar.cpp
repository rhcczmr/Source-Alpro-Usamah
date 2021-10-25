//Program nasrul 1.0
#include <iostream>
using namespace std;

int main()
{
    int uang,jumlah,tukar;

    cout<<"Masukkan uang nasrul  : ";
    cin>>uang;
    cout<<"\n";
    jumlah = uang/250;
    tukar  = jumlah/3;
    jumlah = jumlah +tukar;

    cout<<"Total permen yang didapatkan : "<<jumlah<<endl;
    return 0;
}
