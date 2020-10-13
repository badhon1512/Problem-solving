#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c1[101];
    char c2[101];

    cin>>c1>>c2;
    int i=0;
    int len=strlen(c1);
    while(i<len)
    {
       if(c1[i]==c2[i])
       {
           c1[i]='0';
       }
       else
        c1[i]='1';

        i++;
    }
    cout<<c1<<endl;



}
