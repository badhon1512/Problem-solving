#include<bits/stdc++.h>
using namespace std;
long long int A[100000];
int main()
{
    int t,y=0,n;
    bool flag=false;
    cin>>t;
    while(t--)
    {
        A[100000] = {0};
        flag=true;
        y=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            y+=A[i];
        }
        for(int i=0;i<n;i++)
        {
            if((A[i]+A[i+1]>=y)||A[i]>=y)
            {
              cout<<"NO"<<endl;
              flag=false;
              break;

            }
        }

        if(flag)
            cout<<"YES"<<endl;



    }
}
