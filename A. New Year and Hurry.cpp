#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    int A[30];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        A[i]=i*5;
    }
    int i=1,p=0;
    while((k+=A[i])<=240)
    {

        p++;
        i++;
         if(i>n)
            break;
    }
    cout<<p<<endl;
}
