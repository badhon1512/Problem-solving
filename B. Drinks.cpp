#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,n,sum=0;
    cin>>q;
    int t=q;
    while(q--)
    {
        cin>>n;
        sum+=n;
    }
    printf("%.12f", (float)sum/t);

}
