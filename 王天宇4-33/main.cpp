
#include <iostream>
using namespace std;

int main()
{
   int a;
   int b;
   int c;
   bool isRightTriangle = false;

   cout << "Enter a: ";
   cin >> a;

   cout << "Enter b: ";
   cin >> b;

   cout << "Enter c: ";
   cin >> c;


   int aSquare = a * a;
   int bSquare = b* b;
   int cSquare = c* c;


   if ( ( aSquare +bSquare ) == cSquare&&( aSquare + cSquare ) ==bSquare&&( bSquare + cSquare ) == aSquare )


        cout << "can" << endl;
   else
      cout << "can not" << endl;
}
