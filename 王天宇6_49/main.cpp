#include <iostream>
using namespace std;
double pi = 3.14159;
inline double circleArea( double r )
{
   return pi * r * r;
}
int main()
{
   double r;
   cout << "Enter the radius of the circle: ";
   cin >> r;
   cout << "The area of the circle is " << circleArea( r ) << endl;
}
