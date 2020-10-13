#include<iostream>
using namespace std;
char s[50];
int main()
{
    int n,neighbor=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            neighbor++;
        }
    }
    cout<<neighbor<<endl;
}
