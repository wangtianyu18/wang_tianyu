#include<iostream>
using namespace std;
int celsius(int);
int fahrenheit(int);
int main()
{
    int c=0;
    int f=0;
    int i=0;
    int j=0;
    cout<<"�������϶�:";
    cin>>c;
    cout<<"���϶�="<<fahrenheit(c);
    cout<<"\n���뻪�϶�:";
    cin>>f;
    cout<<"���϶�="<<celsius(f);
    for(i=0;i<100;i+=1)
    {
        cout<<celsius(i)<<"  ";
    }
    cout<<"\n";
    for(j=32;j<=212;j+=1)
    {
        cout<<fahrenheit(j)<<"  ";
    }

}
int celsius(int x)
{

    int m=0;
    m=x-32;
    return m;

}
int fahrenheit(int y)
{

    int n=0;
    n=y+32;
    return n;
}
