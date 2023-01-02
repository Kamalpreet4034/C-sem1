/**Converting time to seconds..**/
#include <iostream>
using namespace std;
int main()
{
    int HR,SEC,MIN,TotalSec;
    cout<<"enter the time in hours: ";
    cin>>HR;
    try{
    if(HR<0)
    {
        throw HR;
        cout<<"hours can't be -ve";
    }
    if(HR>24)
    {
        throw HR;
        cout<<"hours can't be greater than 24";
    }}
    catch(char* exitHR)
    {
        cout<<exitHR;
    }
    cout<<"enter the time in minutes: ";
    cin>>MIN;
    try{
    if(MIN<0)
    {
        throw MIN;
    cout<<"min can't be negative";
    }
    if(MIN>59)
    {
        throw MIN;
        cout<<"min can't let u more than 59";
    }}
    catch(char* exitMIN)
    {
        cout<<exitMIN;
    }

    cout<<"enter the time in seconds: ";
    cin>>SEC;
    try{
    if(SEC<0)
    {
        throw SEC;
        cout<<"can't be -ve";
    }
    if(SEC>59)
    {
        throw SEC;
        cout<<"can't be more than 59";
    }}
    catch (char* exitSEC)
    {
        cout<<exitSEC;
    }
    TotalSec=(HR*3600)+(MIN*60)+SEC;
    cout<<"total time in seconds: "<<TotalSec<<" seconds";
    return 0;
}
