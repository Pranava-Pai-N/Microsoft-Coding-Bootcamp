#include<iostream>
using namespace std;
int main()
{
    int lcm=60;
    int mul =lcm+1;
    int count = 0;
    int i=0;
        while(count<=4)
        {
           if(mul % 7==0)
            {
                if(count!=3){   
            cout <<""<<mul<< endl;
            ++count;
                }
        ++i;
       // ++x;
        cout<<"The number *420 = "<<mul<<endl;
        }
        
    }
     cout<<"Iterations:"<<i<<endl;
    return 0;
}
