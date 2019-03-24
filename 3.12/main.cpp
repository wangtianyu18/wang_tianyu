#include<iostream>
using namespace std;
class Account
{
private:
double rest;
public:
Account(double x)
{
if(x<0)
{
rest=0;
cout<<"你输入的初始与余额无效!";
}
else
rest=x;
}
double credit(double a)
{
rest=rest+a;
return rest;
}
double debit(double b)
{
if(b>rest)
cout<<"Debit amount exceeded account balance!\n";
else
rest=rest-b;
return rest;
}
void getBalance()
{
cout<<"你的余额为:"<<rest<<endl;;
}
};
main()
{
Account account1(100);
account1.getBalance();
cout<<"请输入你要存入的金额:\n";
double a;
cin>>a;
account1.credit(a);
account1.getBalance();
cout<<"请输入你要取得金额:\n";
double b;
cin>>b;
account1.debit(b);
account1.getBalance();
Account account2(200);
account2.getBalance();
cout<<"请输入你要存入的金额:\n";
double c;
cin>>c;
account2.credit(c);
account2.getBalance();
cout<<"请输入你要取得金额:\n";
double d;
cin>>d;
account2.debit(d);
account2.getBalance();
}
