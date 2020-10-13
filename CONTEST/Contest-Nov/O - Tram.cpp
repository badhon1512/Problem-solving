#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a,b,maX=0,total=0;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        total=(total-a)+b;

        if(maX<total)
            maX=total;


    }
    cout<<maX<<endl;
}
