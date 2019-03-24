#include <iostream>
using namespace std;
int main()
{
    int A=0;
    int B=0;

    cout<<"input a integer";
    cin>>A;
    B = A % 2;
    if(B==0)
        cout<<"Å¼Êý";
    if(B!=0)
        cout<<"ÆæÊý";

    return 0;
}
