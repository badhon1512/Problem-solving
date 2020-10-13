#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,i=1,Max=0,total;
    cin>>n;

    while(i<=n)
    {
        cin>>a>>b;
       if(i==1)
       {
           total=a+b;
           Max=total;
       }
       else
       {
           total=(total-a)+b;
           if(total>Max)
             Max=total;
       }

        i++;
    }
    cout<<Max<<endl;
}
