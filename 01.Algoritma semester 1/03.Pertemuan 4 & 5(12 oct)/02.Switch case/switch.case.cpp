//Swicth case
#include <iostream>
using namespace std;

int main(){
    char angkatan;

    cout<<"Input Angkatan (1/2/3/4/5)  : ";
    cin>>angkatan;

    switch(angkatan){
        case '1':
            cout<<"Angkatan 2019"<<endl;
        break;

        case '2':
            cout<<"Angkatan 2018"<<endl;
        break;

        case '3':
            cout<<"Angkatan 2017"<<endl;
        break;

        case '4':
            cout<<"Angkatan 2016"<<endl;
        break;

        default:
            cout<<"Angkatan dibawah atau sama dengan tahun 2015"<<endl;


    }
    return 0;
}