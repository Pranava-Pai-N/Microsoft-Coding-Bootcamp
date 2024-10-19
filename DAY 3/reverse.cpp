#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,digit;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    while(n!=0)
    {
        if(n==0)
        {
            cout<<""<<n<<endl;
        }
        digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    cout<<"Reversed number is "<<rev<<endl;
}