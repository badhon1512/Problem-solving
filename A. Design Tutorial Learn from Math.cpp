#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,n1,n2;
    cin>>n;
    if(n%2==0)
    {
        n2=n-8;
        cout<<8<<" "<<n2<<endl;
    }
    else
    {
        n2=n-9;
        cout<<9<<" "<<n2<<endl;
    }
}
