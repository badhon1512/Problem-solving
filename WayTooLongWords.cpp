#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[101];
    int n;
    unsigned len;
    cin>>n;
    while(n--)
    {
        cin>>s;

        len=strlen(s);
        if(len>10)
        cout<<s[0]<<len-2<<s[len-1]<<endl;
        else
            cout<<s<<endl;
    }
}
