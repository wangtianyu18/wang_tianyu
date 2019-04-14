#include<iostream>
using namespace std;
double smallest(double,double,double);
int main()
{
    double a;
    double b;
    double c;
    cout<<"Enter";
    cin>>a>>b>>c;
    cout<<"The smallest is"<<smallest(a,b,c)<<endl;
}
double smallest(double x,double y,double z)
{
    if(x<=y&&x<=z)
        return x;
    if(y<=x&&y<=z)
        return y;
    if(z<=x&&z<=y)
        return z;
}
