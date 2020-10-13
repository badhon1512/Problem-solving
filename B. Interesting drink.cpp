#include<bits/stdc++.h>
using namespace std;
int A[1000000];
int main()
{
    int n,q,c;
    long long int m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>q;
    sort(A,A+n);
    while(q--)
    {
        c=0;
        cin>>m;
        c=upper_bound(A,A+n,m)-A;
        cout<<c<<endl;

    }
}
