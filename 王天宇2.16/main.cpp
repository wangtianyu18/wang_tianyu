#include<iostream>
int main()
{

  int number1=0;
  int number2=0;
  int sum=0;
  int product=0;
  int difference=0;
  int quotient=0;
  std::cout<<"Enter first integer:";
  std::cin>>number1;
  std::cout<<"Enter second integer:";
  std::cin>>number2;
  sum=number1+number2;
  product=number1*number2;
  difference=number1-number2;
  quotient=number1/number2;
  std::cout<<"Sum is"<<sum;
  std::cout<<"Product is"<<product;
  std::cout<<"Difference is"<<difference;
  std::cout<<"Quotient is"<<quotient<<std::endl;
}
