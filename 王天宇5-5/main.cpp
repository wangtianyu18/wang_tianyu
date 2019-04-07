
#include <iostream>
using namespace std;

int main()
{
   int sum = 0;
   int number;
   int value;


   cout << "Enter  ";
      cin >> number;

   for ( int i = 1; i <= number; i++ )
   {
      cin >> value;
      sum += value;
   }


   cout << "Sum of the " << number << " is " << sum;
}
