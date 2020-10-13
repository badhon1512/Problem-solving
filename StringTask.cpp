#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    int len;
    cin>>s;
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        tolower(s[i]);
        if(s[i]!='a'&&s[i]!='o'&&s[i]!='y'&&s[i]!='e'&&s[i]!='u'&&s[i]!='i'&&s[i]!='A'&&s[i]!='O'&&s[i]!='Y'&&s[i]!='E'&&s[i]!='U'&&s[i]!='I')
        {
            cout<<".";
           putchar(tolower(s[i]));
        }
    }

}
