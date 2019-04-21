#include<iostream>
using namespace std;
int fanxiang(int);
int main()
{

    int a;
    cout<<"Enter :";
    cin>>a;
    cout<<"fanxiang is"<<fanxiang(a);
}
fanxiang(int n)
{
    int m=0;
    while(n>0)
    {


    m*=10;
    m+=n%10;
    n/=10;
    }
    return m;
}
