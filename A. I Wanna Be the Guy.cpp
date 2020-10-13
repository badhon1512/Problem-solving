#include<bits/stdc++.h>
using namespace std;
int X[100]={0};
int Y[100]={0};
int main()
{
    int n,p,q,x,y;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>x;
        X[x]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        X[y]=1;
    }

    for(int i=1;i<=n;i++)
    {
       if(X[i]==0&&Y[i]==0)
       {
           cout<<"Oh, my keyboard!"<<endl;
           return 0;
       }

    }
    cout<<"I become the guy."<<endl;
    return 0;
}
