#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,total=0;
    long long n;

    cin>>T;
    while(T--)
    {
        total=0;
        cin>>n;
        for(long long i=2;i<=(n/2)+1;i++)
        {
            if(n%i==0)
            total++;
        }
        if(total==1)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
