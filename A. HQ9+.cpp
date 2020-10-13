#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
    cin>>s;
    int i=0;
    while(i<=s.size())
    {
        if(s[i]=='H')
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(s[i]=='Q')
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(s[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }



        i++;
    }

    cout<<"NO"<<endl;
}
