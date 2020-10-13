#include<iostream>
using namespace std;
int A[1000];
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    cout<<sum<<endl;
}
