#include <iostream>
using namespace std;
class relation{
    public:
        int n,A[10][10],B[10][10];
        relation(int c)
        {
            n=c;
        }
void input()
{
    cout<<"THIS ARRAY HAS 9 ELEMENTS.... "<<endl;
    cout<<"WHICH IS GOING TO BE SHOWN IN THE FORM OF 3*3 MATRIX..."<<endl;
    cout<<"SO PLEASE ENTER YOUR CHOICE EITHER IN 1 OR 0 : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
}
void display()
{
    cout<<"MATRIX AS PER USER ENTERED DATA IS: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool reflexive()
{
    int a=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j && A[i][j]==1)
            {
                a++;
            }
        }
    }
    if(a==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool symmetric()
{
    int a=0,m=0;
    m=(n*n)-n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && A[i][j]==A[j][i]==1)
            {
                a++;
            }
        }
    }
    if(a==m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool antisymmetric()
{
    int a=0,m=0;
    m=(n*n)-n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && A[i][j]!=A[j][i])
            {
                a++;
            }
        }
    }
    if(a==m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool transitive()
{
    int sum=0;
    int a=0;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=A[i][j]*A[j][k];
            }
            B[i][k]=sum;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (A[i][j]==B[i][j])
            {
                a++;
            }
        }
    }
    if (a==n*n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

};
int main()
{
    cout<<"WELCOME TO THE CMD OF THIS PROGRAM....."<<endl;
    cout<<"THIS PROGRAM GIVES THE VALID EQUIVALENCE TEST OF THE RELATION.."<<endl;
    cout<<"THIS PROGRAM TELLS ABOUT EQUIVALENCE,PARTIAL ORDERED AND NONE TYPE OF THE MATRIX..."<<endl;
    relation a(3);
    bool c;
    a.input();
    a.display();
    a.reflexive();
    a.symmetric();
    a.antisymmetric();
    a.transitive();
    if(a.reflexive() && a.symmetric() && a.transitive())
    {
        cout<<"THIS RELATION IS EQUIVALENCE.....";
    }
    else if(a.reflexive() && a.antisymmetric() && a.transitive())
    {
        cout<<"THIS RELATION IS PARTIAL ORDERED...";
    }
    else
    {
        cout<<"THIS RELATION IS NONE.....";
    }
    return 0;
}
