#include<iostream>
using namespace std;
int main()
{
    int m,n,temp;
    cin>>n>>m;

    if(n>m)
        temp=m;

    else
        temp=n;

    if(temp%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else
        cout<<"Akshat"<<endl;
}
