#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int n,len;
    cin>>n;
    while(n--)
    {

        cin>>S;
        len=S.length();

        if(len>10){
            cout<<S[0]<<len-2<<S[len-1]<<endl;
        }
        else

        cout<<S<<endl;




    }
}
