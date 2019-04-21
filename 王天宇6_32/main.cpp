#include<iostream>
using namespace std;
int qualityPoints(int);
int main()
{

    int a ;
    cout<<"Enter"<<endl;
    cin>>a;
    cout<<"grade is"<<qualityPoints(a)<<endl;

}
qualityPoints(int n)
{
    int m=0;
    if(n<60)
        m=0;
    else if(n>=60,n<=69)
        m=1;
    else if(n>=70,n<=79)
        m=2;
    else if(n>=80,n<=89)
        m=3;
    else if(n>=90,n<=100)
        m=4;
    else
        m=0;
    return m;
}
