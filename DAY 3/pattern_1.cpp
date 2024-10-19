//HW 1 5 13 29 49 77 -Adding multiples of 4 which are not divisible by 12
#include<iostream>
using namespace std;
int main(void){
    int N;
    cout<<"Enter no of terms in sequence :"<<endl;
    cin>>N;
    int n=1;
    int mul=4;
   int num,i;
    for(i=0;i<N;i++)
    {
       cout<<"\t"<<n;
      n=n+mul;
      mul=mul+4;
      if(mul%12==0)
       mul+=4;
    }
}