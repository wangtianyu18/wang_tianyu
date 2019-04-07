
#include <iostream>
using namespace std;

int main()
{
   double a;
   double b;
   double c;
   bool isTriangle = false;

   cout << "Enter a: ";
   cin >> a;

   cout << "Enter b: ";
   cin >> b;

   cout << "Enter c: ";
   cin >> c;

   if ( a + b > c&&a+c>b&&b+c>a )

      cout << "can" << endl;
   else
      cout << "can not" << endl;
}
