#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,i,c=0;
    string s;
    cin>>s;
    l=s.length();
    sort(s.begin(),s.end());

    for (i = 0; i<l; i++)
    {
        if (s[i] != s[i +1] )

        {
            c++;
        }

    }
    if(c%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}
