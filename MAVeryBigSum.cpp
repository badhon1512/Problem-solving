#include<iostream>
using namespace std;
int A[10];
int main()
{
    int n;
    long long sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
      sum+=A[i];
    }
    cout<<sum<<endl;
}
