#include<bits/stdc++.h>
using namespace std;
long long int A[4];
int main()
{
    long long int a,b,c;
    cin>>A[0]>>A[1]>>A[2]>>A[3];
    sort(A,A+4);
    a=A[3]-A[0];
    b=A[3]-A[1];
    c=A[3]-A[2];
    cout<<a<<" "<<b<<" "<<c<<endl;


}
