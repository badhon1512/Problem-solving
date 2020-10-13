#include<iostream>
using namespace std;
int main()
{
    int casE=0,T;
    long long n,c=0;
    cin>>T;
    while(T--)
    {
        c=0;
        casE++;

    cin>>n;
    while(n!=0)
    {
        if(n%2==1)
        {
            c++;

        }
        n/=2;
    }

    if(c%2==0)
    cout<<"Case "<<casE<<": even"<<endl;
    else
         cout<<"Case "<<casE<<": odd"<<endl;

    }

}
