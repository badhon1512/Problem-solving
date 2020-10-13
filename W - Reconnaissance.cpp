#include<iostream>
using namespace std;
int A[1000];
int main()
{
    int n,d,c=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((abs(A[i]-A[j])<=d))
            {
                c+=2;
            }
        }
    }
    cout<<c<<endl;
}
