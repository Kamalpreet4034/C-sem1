#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int r10;
    int r20;
    int r50;
    int r100;
    int r200;
    int r500;
    int r2000;
cout<<"notes of r10: ";
cin>>r10;
cout<<"notes of r20: ";
cin>>r20;
cout<<"notes of r50: ";
cin>>r50;
cout<<"notes of r100: ";
cin>>r100;
cout<<"notes of r200: ";
cin>>r200;
cout<<"notes of r500: ";
cin>>r500;
cout<<"notes of r2000: ";
cin>>r2000;
int sum=r10+r20+r50+r100+r200+r500+r2000;
cout<<"total number of notes: "<<sum<<endl;
int amount=(r10*10)+(r20*20)+(r50*50)+(r100*100)+(r200*200)+(r500*500)+(r2000*2000);
cout<<"the total amount is: "<<amount<<endl;
return 0;

}
