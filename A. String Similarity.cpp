#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,s1;
        cin>>s;
       // cout<<s[0];
        for(int i=0;i<int(s.size());i+=2)
        {
            s1+=s[i];


        }
        cout<<s1<<endl;

    }
}
