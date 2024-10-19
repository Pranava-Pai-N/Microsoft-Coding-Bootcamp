//Largest and second largest in a array of three numbers
#include<iostream>
using namespace std;
int main()
{
    int a[3],i,j,temp;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
        if(a[j+1]>a[j])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
     }
    }
    if(a[i]==a[i+1])
    {
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
        printf("Largest is %d\n",a[i]);
       printf("Second Largest is %d\n",a[i+1]);
       }
     }
    }
    printf("Largest is %d\n",a[0]);
    printf("Second Largest is %d\n",a[1]);
    printf("Smallest is %d\n",a[2]);
}