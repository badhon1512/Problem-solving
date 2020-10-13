#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[102];
    int n,total=0;
    cin>>n>>c;
    for(int i=0;i<n;i++)
    {
        if(c[i]>=65&&c[i]<=90)
        {
            c[i]+=32;
        }
    }
    sort(c,c+n);

    for(int i=0;i<n-1;i++)
    {
        if(c[i]!=c[i+1])
            total++;
    }

    if(total==25)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
