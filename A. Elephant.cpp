#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n!=0)
    {
        if(n>=5)
        {
            int d=n/5;
            c+=d;
            n%=5;
        }
        else if(n==4)
        {
            int d=n/4;
            c+=d;
            n%=4;
        }
        else if(n==3)
        {
            int d=n/3;
            c+=d;
            n%=3;
        }
        else if(n==2)
        {
            int d=n/2;
            c+=d;
            n%=2;
        }
        else
        {
            int d=n/1;
            c+=d;
            n%=1;
        }
    }
    cout<<c<<endl;
}
