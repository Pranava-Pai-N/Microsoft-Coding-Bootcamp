//Decimal to Binary
#include<iostream>
using namespace std;
int main(){
    int dec,bin=0,i=1,digit;
    cout<<"Enter a decimal number :"<<endl;
    cin>>dec;
    while(dec!=0)
    {
       digit=dec%2;
       dec=dec/2;
       bin=bin+digit*i;
       i=i*10;
    }
    cout<<""<<bin<<endl;
    return 0;
}

