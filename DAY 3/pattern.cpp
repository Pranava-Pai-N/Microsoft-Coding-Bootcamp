//1 4 7 12 23 42 77 
#include<iostream>
using namespace std;
int main(){
    int N=1000;
     int n=1;
     int n2=4;
     int n3=7;
     int next=n+n2+n3;
     cout<<"\t"<<n<<"\t"<<n2<<"\t"<<n3<<"\t"<<next<<endl;
     while(N>=next)
     {
        cout<<"\t"<<next;
        n=n2;
        n2=n3;
        n3=next;
        next=n+n2+n3;
     }
}