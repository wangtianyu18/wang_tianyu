#include <iostream>
using namespace std;
bool multiple(int ,int);
int main()
{
int a;
int b;
cout<<"Enter a and b";
cin>>a>>b;
if (multiple(a,b))
    cout <<"is true";
    else
    cout<<"is false";
}
bool multiple(int a,int b)
{
    return !(b%a);
}
