#include<bits/stdc++.h>
using namespace std;
int A[102];
int main()
{
    int n,sum,maximum,need;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sum=accumulate(A,A+n,0);
    maximum=*max_element(A,A+n);
    need=maximum*n;
    cout<<need-sum<<endl;
}
