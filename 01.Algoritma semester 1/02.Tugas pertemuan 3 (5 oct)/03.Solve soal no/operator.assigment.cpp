#include <iostream>

using namespace std;

int main()
{
    
    int p = 4;
    int q = 3;

    
    
    p = p + 3;
    cout<<"p = p + 3 : "<<p<<endl;
    
    p = p--;
    cout<<"p--       : "<<p--<<" perhitungan awal  post-increment"<<endl;
    cout<<"p--       : "<<p<<  " perhitungan akhir post-increment"<<endl;
    
    p = p-=q;
    cout<<"p-=q      : "<<p<<endl;

    return 0;
    
}