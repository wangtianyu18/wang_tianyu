#include<iostream>
using namespace std;
int main()
{
    int i=0,max1=0,max2=0,x=0;
    while(i<10)
    {
        cout<<"Enter:";
        cin>>x;
        if (max1<x)
           {
            max2=max1;
            max1=x;
           }
        i+=1;

    }
    cout<<"���="<<max1;
    cout<<"�δ�="<<max2;

}
