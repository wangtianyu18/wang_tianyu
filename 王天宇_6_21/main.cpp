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
            cout<<"��ż��";
        else
            cout<<"\n����ż��";
    }

}
bool iseven(int a)
{
    return !(a%2);
}
