//Menggunakan konstanta
#include <iostream>
using namespace std;

int main()
{
    float jari, luas; //Deklarasi variabel
    const float phi = 3.14;//Deklarasi variabel konstanta
    cout<<"Masukkan Nilai Jari - Jari   = "; //Menampilkan teks
    cin>>jari; //proses input

    luas = phi * jari * jari; //Proses memasukkan rumus luas lingkaran

    cout<<"Luas lingkaran               = "<<luas<<endl;

    return 0;
}