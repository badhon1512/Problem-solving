#include<iostream>
using namespace std;
int main()
{
    int i;
    char s[1000];
    cin>>s;
    if(s[0]>=97&&s[0]<=122)
    {
        s[0]=s[0]-32;
    }
    cout<<s<<endl;
}
