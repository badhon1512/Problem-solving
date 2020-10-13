#include<bits/stdc++.h>
using namespace std;
char S[200];
char O[200];
int main()
{
    int len,j=0;
    cin>>S;
    len=strlen(S);
    for(int i=0;i<len;i++)
    {
        if(S[i]=='W'&&S[i+1]=='U'&&S[i+2]=='B')
        {
            if(i>0)
           {
               O[j]=' ';
               j++;
           }
            i=i+2;

           continue;

        }
        else
        {
            O[j]=S[i];
            j++;
        }
    }
    cout<<O<<endl;

}
