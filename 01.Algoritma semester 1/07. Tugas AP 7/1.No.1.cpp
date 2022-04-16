#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
    int a,b,p;
    char kata[70];
     
    cout<<"- - - Selamat datang di program segitiga - - -"<<endl;
    cout<<"\n";
    cout<<"Masukkan Kata : ";
    cin>>kata;
    cout<<endl;

    p = strlen(kata);
    for(a=0; a<p; a++){
        for(b=a; b<p; b++)
        cout<<kata[b];
        cout<<endl;
    }
    getch();
}