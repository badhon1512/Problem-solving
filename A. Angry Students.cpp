#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,c=0;
    cin>>t;
    while(t--)
    {
        int c=0;
        cin>>k;
        char A[k];
        for(int i=0;i<k;i++)
        {
            cin>>A[i];

        }

        bool flag=true;
        while(flag){
                int yes=0;
        for(int i=0;i<k-1;i++)
        {

            if(A[i]=='A'&&A[i+1]=='P')
            {
                A[i+1]='A';
                i++;
                yes++;

            }



        }

        if(yes==0)
            flag=false;
        c++;
        }
        cout<<c-1<<endl;

    }
}
