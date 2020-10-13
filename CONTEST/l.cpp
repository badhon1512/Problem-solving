#include<iostream>
using namespace std;
int main()

{
    int n,q,qn,i,j,flag;
    cin>>n;
    int ar[50004]= {0};
    for(i=1;i<=n;i++)
       cin>>ar[i];
    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>qn;
        flag=0;
        for(j=1; j<=n; j++)
        {
            if(ar[j]>=qn)
            {
                if(ar[j-1]>0)
                   cout<<ar[j-1]<<" ";
                else
                    cout<<"X ";
                while(ar[j]==qn)
                    ++j;
                if(ar[j]>qn)
                    cout<<ar[j]<<endl;
                else if(ar[j+1]>0)
                    cout<<ar[j+1]<<endl;
                else
                   cout<<"X "<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"X "<<ar[n]<<endl;

    }
    return 0;
}
