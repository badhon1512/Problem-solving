#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t(0);
    long long int num;
    cin>>n>>num;
    for(int i=1;i<=n;i++)
    {
        if((num%i==0)&&(num/i<=n))
            t++;

    }
    cout<<t<<endl;
}
