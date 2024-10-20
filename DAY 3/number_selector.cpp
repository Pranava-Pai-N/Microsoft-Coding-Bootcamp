#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int num,i=0;
    cout<<"Hint it is a number between 1 to 9"<<endl;
    while(1){
    cout<<"Choose your choice"<<endl;
    cin>>num;    
     if(num==n)
    {
        if(i==0)
    cout<<"Bullseye you have finished the game in"<<" "<<++i<<" "<<"turn"<<endl;
    else
     cout<<"Bullseye you have finished the game in"<<" "<<i++<<" "<<"turns"<<endl;
    return 0;
    }
    if(num %2==0)
    {
        cout<<"Your number is not even"<<endl;
    i++;
    }
    else
    {
        cout<<"Your number is odd"<<endl;
    i++;
    }
   if(num<5)
   {
    cout<<"Your are very close to the number"<<endl;
   i++;
   }
    }
    cout<<"You have successfully completed the game in\t" << i <<" turns"<<endl;
    return 0;
}
