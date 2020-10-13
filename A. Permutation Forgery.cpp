#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> A;
        for(int i=0;i< n;i++)
        {
            cin>>x;
            A.push_back(x);


        }


        reverse(A.begin(),A.end());
         for(int x :A)
            cout<<x;

    }
}
