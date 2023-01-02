#include <iostream>
using namespace std;
int gcd(int a,int b);
int main()
{
int a,b;
cout<<"Enter two positive integers: ";
cin>>a>>b;
cout<<"GCD of "<<a<<" & "<<b<<" is: "<<gcd(a,b);
return 0;
}
int gcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(b!= 0)
       return gcd(b,a%b);

}
