#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p,t=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>p;
        if((k+p)<=5)
        t++;

    }
    cout<<t/3<<endl;
}
