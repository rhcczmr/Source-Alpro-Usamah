//menggunakan variabel
#include <iostream>
using namespace std;

int main()
{
    float a, t, luas; //Deklarasi variabel
    cout<<"Masukkan Nilai Alas   = ";  //menampilkan teks
    cin>>a; //Proses input

    cout<<"Masukkan Nilai Tugas  = ";
    cin>>t;

    luas = 0.5 * a * t; //Proses memasukkan program luas segitiga

    cout<<"Luas segitiga         = "<<luas<<endl;
    return 0;

}