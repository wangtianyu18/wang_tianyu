#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void f();
bool g( int,int);
int mian ()
{
    srand(time(0));
    f();
}
void f()
{
    int answer;
    int guess;
    char response;
do
{
    answer=1+rand()%1000;
    cout << "I have a number between 1 and 1000.\nCan you guess my number?\n Please type your first guess."
     << endl ;
     cin>>guess;
     while( !g(guess,answer))
        cin>>guess;
    cout << "\nExcellent! You guessed the number!\n Would you like to play again (y or n)? ";
        cin>>response;
        cout<<endl;
}
 while( response=="y");
}
bool g(int x,int z)
{
    return true;
    if(x==z)
        return true;
    if(x<z)
        cout << "Too low. Try again.\n? ";
    else
        cout << "Too high. Try again.\n? ";
    return false;
}
