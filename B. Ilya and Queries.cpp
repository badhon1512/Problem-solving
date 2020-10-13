#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len,a,b,q,c;
    string s;
    cin>>s;
    len=s.length();
    int A[len+1];
    cin>>q;
    A[1]=0;
    for(int i=1;i<len;i++)
    {
        if(s[i]==s[i-1])
            A[i+1]=A[i]+1;
            else
                A[i+1]=A[i];
    }
    while(q--)
    {
        cin>>a>>b;
        cout<<A[b]-A[a]<<endl;

    }


}
