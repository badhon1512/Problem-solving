#include<bits/stdc++.h>
using namespace std;
int A[5]={0,0,0,0,0};


int main()
{
    int n,s,totalTexi=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        A[s]++;
    }

    totalTexi=(A[4]+A[3]+(A[2]/2));

    A[1]-=A[3];

    if(A[2]%2!=0)
    {
        totalTexi++;
         A[1]-=2;
    }

    if(A[1]>0)
        totalTexi+=ceil((float)A[1]/4);

    cout<<totalTexi<<endl;
}
