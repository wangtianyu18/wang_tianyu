#include<iostream>
using namespace std;
bool isPrime(int);
int main()
{
    int a=0;
    cin>>a;
    if(isPrime(a))
    cout<<a<<"is prime";
    else
    cout<<a<<"is not prime"<<endl;

}
bool isPrime( int n )
{
   for ( int loop2 = 2; loop2 <= n / 2; loop2++ )
   {
      if ( n % loop2 == 0 )
         return false;
   }
   return true;
}
