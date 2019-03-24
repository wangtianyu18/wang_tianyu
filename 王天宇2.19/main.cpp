#include<iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int x=0;
    int y=0;
    int sum=0;
    int average=0;
    int product=0;
    cout<<"Input three different integers:";
    cin>>a>>b>>c;
    sum =a+b+c;
    cout<<"Sum is"<<sum;
    average=(a+b+c)/3;
    cout<<"Average is"<<average;
    product=a*b*c;
    cout<<"Product is"<<product;
    if(a<=b&&a<=c)
        cout<<"Smallest is"<<a;
    if(b<=a&&b<=c)
        cout<<"Smallest is"<<b;
    if(c<=a&&c<=b)
        cout<<"Smallest is"<<c;
    if(a>=b&&a>=c)
        cout<<"Largest is"<<a;
    if(b>=a&&b>=c)
        cout<<"Largest is"<<b;
    if(c>=a&&c>=b)
        cout<<"Largest is"<<c;
}

