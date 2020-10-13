#include<bits/stdc++.h>
using namespace std;
char S[100];
int main()
{
    int len,low=0,up=0;
    cin>>S;
    len=strlen(S);
    for(int i=0;i<len;i++)
    {
        if(S[i]>=65&&S[i]<=90)
            up++;
        else if(S[i]>=97&&S[i]<=122)
            low++;
    }
    if(low>=up)
    {
    for(int i=0;i<len;i++)
    {
      if(S[i]>=65&&S[i]<=90)
       S[i]+=32;
    }
    }
    else
    {

    for(int i=0;i<len;i++)
    {
        if(S[i]>=97&&S[i]<=122)
       S[i]-=32;
    }
    }
    cout<<S<<endl;

}
