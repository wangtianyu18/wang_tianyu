#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int flip();
int main()
{
    int zhengmian=0;
    int fanmian=0;
    srand(time(0));
    for(int i=0;i<100;i++)
    {
        if(flip()==0)
           {

            zhengmian++;
            cout<<"\n zhengmian:";
           }
        else
        {
            fanmian++;
            cout<<"\n fanmian:";
        }
        if(i%100==0)
            cout<<endl;
    }

    cout<<"\n zhengmian:"<<zhengmian<<"\n fanmian:"<<fanmian<<endl;

}
int flip()
{
    return rand()%2;
}
