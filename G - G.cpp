#include<bits/stdc++.h>
int p[10];
int t[32];
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>t[i];
    }
    sort(t,t+n);

    for(int i=0;i<10;i++)
    {

        cin>>p[i];
    }
    sort(p,p+10);
    if(p[0]>t[0])
    {
        cout<<t[0]<<endl;
    }
    else
    {
        cout<<10<<endl;
    }

}
