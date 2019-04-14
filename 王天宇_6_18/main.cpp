#include<iostream>
using namespace std;

int integerPower(int,int);
int main()
{ int base,exponent;
  cout<<"enter base and exponent";
  cin>>base>>exponent;
  cout<<base<<"to the power"<<exponent<<"is:"
<<integerPower(base,exponent);

}

int integerPower(int b,int e)
{
    int p=1;
    int i=0;
    while(i<e)
    {
        p*=b;
        i=i+1;


    }
    return p;
}
