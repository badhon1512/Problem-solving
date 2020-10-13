#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,high,low,height,highindex,lowindex;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>height;
        if(i==1)
        {
            high=height;
            low=height;
            lowindex=i;
            highindex=i;
        }
        else if(height>high)
        {
             high=height;
            highindex=i;
        }
        else if(height<=low)
        {
            low=height;
            lowindex=i;

        }
    }

    if(highindex>lowindex)
        lowindex++;
    cout<<(highindex-1)+(n-lowindex)<<endl;

}
