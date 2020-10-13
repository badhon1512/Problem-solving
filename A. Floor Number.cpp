#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,floor;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>x;
        if(n>2)
        {
            floor=ceil((n-2)/(float)x);
        cout<<floor+1<<endl;
        }
        else
            cout<<1<<endl;


    }
}
