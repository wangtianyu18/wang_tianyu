#include<iostream>
#include <cmath>

using namespace std;
double hypotenuse(double,double);
 int main()
{
    double a;
    double b;
    cout<<"Enter a and b";
    cin>>a>>b;
    cout<<"c is:"<<hypotenuse(a,b);

}
double hypotenuse(double a,double b)
{
    return sqrt(a*a+b*b);
}
