#include<iostream>
#include<string.h>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len1,len2,sum1=0,sum2=0,I;
    char s1[101];
    char s2[101];
    cin>>s1;
    cin>>s2;
    len1=strlen(s1);
    len2=strlen(s2);
    for(int i=0; i<len1; i++)
    {
        if(s1[i]>='a'&&s1[i]<='z')
        {
            s1[i]-=32;
        }
        I=(int)s1[i];
        sum1+=I;
    }
    for(int i=0; i<len2; i++)
    {
        if(s2[i]>='a'&&s2[i]<='z')
        {
            s2[i]-=32;
        }
        I=(int)s2[i];
        sum2+=I;
    }
    if(sum1<sum2)
        cout<<"-1"<<endl;
    else if(sum1>sum2)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;


}
