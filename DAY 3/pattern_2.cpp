//1 2 4 6 7 10 10 14 1+3=4 2+4=6
#include<iostream>
using namespace std;
int main(void){
    int series_1=1;
    int series_2=2,i;
    int diff_1=3,diff_2=4;
    int N;
    cout<<"Enter no of terms :"<<endl;
    cin>>N;
    cout<<"\t"<<series_1;
    cout<<"\t"<<series_2;
    for(i=0;i<N;i++)
    {
        series_1+=diff_1;
        cout<<"\t"<<series_1;
        series_2+=diff_2;
        cout<<"\t"<<series_2;
    }
}
    