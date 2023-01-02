#include <iostream>
using namespace std;
int main()
{
    int i,j,num=1;
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
    {
        if(i>=j)
        {
        cout<<num<<" ";
        num++;
    }
    else
        cout<<"*";
    }
    cout<<endl;
    }
    cout<<endl;
    return 0;
}
