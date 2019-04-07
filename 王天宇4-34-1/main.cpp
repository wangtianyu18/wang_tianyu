#include <iostream>
using namespace std;

int main()
{
   int number;
   int jiecheng = 1;

   cout << "Enter : ";
   cin >> number;

   cout << number << "! is ";

   while ( number > 0 )
   {
    jiecheng *= number;
      number--;
   }

   cout << jiecheng << endl;
}
