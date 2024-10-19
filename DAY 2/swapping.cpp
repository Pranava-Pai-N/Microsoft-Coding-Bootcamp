#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter values of a and b"<<endl;
    cin>>a>>b;
    cout<<"Before swapping a="<<a<<endl;
    cout<<"Before swapping b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping a="<<a<<endl;
    cout<<"After swapping b="<<b<<endl;

    return 0;
}