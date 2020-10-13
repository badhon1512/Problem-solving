#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=0,r=0,m;
    cin>>n;
    char s[n];
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
            l--;
            else if(s[i]=='R')
            r++;
    }
    m=(r-(l))+1;
    cout<<m<<endl;

}
