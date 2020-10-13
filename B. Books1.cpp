#include<bits/stdc++.h>
using namespace std;
int A[100000];
int main()
{

    int n,t,book=0,sum=0,j=0,total=0;
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
       sum+=A[i];

       if(sum>t)
       {

            sum-=A[i];
            j++;
       }
       total=max(total,(i+1)-j);

    }
    cout<<total<<endl;
}
