#include<iostream>
using namespace std;
int main()
{
    int a,b, hasil;
    cout<<"Program mengubah bilangan pecahan ke bilangan bulat"<<endl;
    cout<<"Masukan Pembilang = ";
    cin>>a;
    cout<<"Masukan Penyebut = ";
    cin>>b;
    cout<<"                 "<<a<<endl;
    cout<<"Pecahannya =     -"<<endl;
    cout<<"                 "<<b<<endl;
    hasil = a / b;
    cout<<endl;
    cout<<"Bilangan bulat = "<<hasil<<endl;
    return 0;
}
