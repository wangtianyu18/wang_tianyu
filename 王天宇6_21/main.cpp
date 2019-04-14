#include <iostream>
using namespace std;
bool iseven(int);
int main()
{
    int x;
    for(int i=1;i>0;i+=1)
    {
        cout<<"Enter a integer:";
        cin>>x;
        if (iseven(x))
            cout<<"是偶数";
        else
            cout<<"\n不是偶数";
    }

}
bool iseven(int a)
{
    return !(a%2);
}
