
#include <iostream>
using namespace std;

int main()
{
   int number;
   int value;
   int smallest;

   cout << "Enter  ";
   cin >> number >> smallest;


   for ( int i = 2; i <= number; i++ )
   {
      cin >> value;


      if ( value < smallest )
         smallest = value;
   }


   cout << "The smallest  is: " << smallest << endl;
}
