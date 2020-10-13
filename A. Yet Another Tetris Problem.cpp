#include<bits/stdc++.h>
using namespace std;
int A[100];
int main()
{

    int t,odd,even,n;
    cin>>t;
    while(t--)
    {
        odd=0;
        even=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]%2==0)
            {
                odd++;
            }
            else
                even++;
        }
        if(odd==n||even==n)

            cout<<"YES"<<endl;

            else
                cout<<"NO"<<endl;


    }
}
