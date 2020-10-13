#include<iostream>
using namespace std;
int main()
{
    string s;
    int q,n;
    cin>>n>>q>>s;
    while(q--)
    {
        for(int i=1;i<n;i++)
        {
            if(s[i]=='G'&&s[i-1]=='B')
            {
                s[i]='B';
                s[i-1]='G';
                i++;
            }
        }
    }
    cout<<s<<endl;
}
