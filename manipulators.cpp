#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
cout<<23<<'a'<<4.1<<endl;   //-----ans.1

cout<<23<<" "<<'a'<<" "<<4.1<<endl;     //---ans.2

cout<<23<<endl<<'a'<<4.1<<endl;     //---ans.3

cout<<fixed;
cout<<23<<'a'<<4.1<<endl;
cout<<23.1<<'a'<<setprecision(2)<<4.1<<endl;
cout<<36.7589<<endl;               //---ans.4

cout<<"i have"<<1
    <<"off on wednesday"<<endl;     //---ans.5

cout<<setprecision(6)<<236.152<<endl;       //---ans.6

cout<<"this tax is"<<setw(8)
    <<setprecision(6)<<236.152<<"this year"<<endl;     //---ans.7

cout<<"this'is'me"<<endl;                    //---ans.8

cout<<"this\"is\"me"<<endl;                 //---ans.9

cout<<"this is\0 magic"<<endl;                  //---ans.10

cout<<setw(6)<<setfill('*')<<32.3<<endl;       //---ans.11

char ch='A';
cout<<(int)ch<<"="<<ch<<endl;                    //---ans.12

double x=1237234.1235;
cout<<fixed<<setprecision(2)<<showpos<<setfill('*');
cout<<setw(15)<<left<<x<<endl;
cout<<setw(15)<<internal<<x<<endl;
cout<<setw(15)<<right<<x<<endl;                      //---ans.13

cout<<fixed<<showpos<<setfill('*');
cout<<setw(7)<<left<<"NASH"<<endl;                 //ans.14

cout<<"the value in hexadecimal is";
cout<<hex<<2596<<endl;
cout<<"the value in octal is";
cout<<oct<<2546<<endl;                                 //--ans.15

return 0;
}
