#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long long int n,x,y,m;
    cin>>T;
    while(T--)
    {
        m=0;
        cin>>n>>x>>y;
        if(x==y)
        {
            m=x*2;
        }
        else if(y<x)
        {
             m=min(x,y)*2+1;

        }
        else
            m=min(x,y)*2;
        if(m>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }
}
