/**The addition of user entered number..in more than 2 range**/
#include <iostream>
using namespace std;
int main()
{
    int n,j;
    cout<<"Enter the total numbers for the sum: ";
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
    cin>>j;
    sum+=j;
    }
    cout<<"The total sum is: "<<sum;
    }
