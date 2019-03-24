王天宇 2019/3/24 19:40；50
#include <iostream>
#include<string>

using namespace std;
class date
{
private:
    int month;
    int day;
    int year;
public:
    date (int a,int b,int c)
    {
        setmonth(a);
        setday(b);
        setyear(c);

    }
    void setmonth(int a)
    {
        month=a;
    }
    void setday(int b)
    {
        day=b;
    }
    void setyear(int c)
    {
        year=c;
    }int getmonth() const
    {
       return month;
    }
    int getday() const
    {
       return day;
    }
    int getyear() const
    {
        return year;
    }


    void displaymessage()
    {
        cout << getmonth() << "/" << getday() << "/" << getyear() <<endl;
     }
};

int main()
{
    date data1(3,24,2018);
    data1.displaymessage();
    return 0;
}
