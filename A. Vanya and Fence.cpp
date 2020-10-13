#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,h1,sum=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>h1;

        sum+=ceil(h1/(float)h);

    }
    cout<<sum<<endl;

}
