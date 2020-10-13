#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j;
    bool flag,flag2;
    int A[5000];
    cin>>t;
    while(t--)
    {
        flag=false;
        flag2=true;

        cin>>n;
        j=n-1;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n-2;i++)
        {
            if((A[i]==A[i+2])&&i<n-2)
            {

                flag=true;
            }
            else if((A[i]!=A[j])&&i<=(n/2))
            {
                flag2=false;

            }
             j--;


        }

        if(flag||flag2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }



}
