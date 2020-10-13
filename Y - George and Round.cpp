#include<bits/stdc++.h>
using namespace std;
int M[10000];
int N[10000];
int main()
{

    int t,n,m,Max,a;
  //  cin>>n>>m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {

        cin>>N[i];
    }
    int j=0,c=0;
    for(int i=0;i<m;i++)
    {

        cin>>a;

        if(N[j]==a&&j<n)
        {

            j++;
            c++;
        }
    }
    cout<<(n-c)<<endl;


}
