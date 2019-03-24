#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    std::cout<<"Input five different integers";
    std::cin>>a>>b>>c>>d>>e;

    if(a>=b&&a>=c&&a>=d&&a>=e)
        std::cout<<"Largest is "<<a;
    if(b>=a&&b>=c&&b>=d&&b>=e)
        std::cout<<"Largest is "<<b;
    if(c>=a&&c>=b&&c>=d&&c>=e)
       std:: cout<<"Largest is "<<c;
    if(d>=a&&d>=b&&d>=c&&d>=e)
        std::cout<<"Largest is "<<d;
    if(e>=a&&e>=b&&e>=c&&e>=d)
        std::cout<<"Largest is "<<e;

    if(a<=b&&a<=c&&a<=d&&a<=e)
        std::cout<<"\nSmallest is "<<a;
    if(b<=a&&b<=c&&b<=d&&b<=e)
        std::cout<<"\nSmallest is "<<b;
    if(c<=a&&c<=b&&c<=d&&c<=e)
        std::cout<<"\nSmallest is "<<c;
    if(d<=a&&d<=b&&d<=c&&d<=e)
        std::cout<<"\nSmallest is "<<d;
    if(e<=a&&e<=b&&e<=c&&e<=d)
        std::cout<<"\nSmallest is "<<e;

    return 0;
}
