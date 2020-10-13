#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    bool flag=false;
    cin>>n;
    char A[n][5];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        cin>>A[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
        if((A[i][j]=='O'&&A[i][j+1]=='O'))
        {
            flag=true;
            A[i][j]='+';
            A[i][j+1]='+';

            break;
        }
        }
        if(flag)
            break;
    }

    if(!flag)
        cout<<"NO"<<endl;
    else
    {
         cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<5;j++)
            {
                cout<<A[i][j];

            }
            cout<<endl;
        }
    }
}
