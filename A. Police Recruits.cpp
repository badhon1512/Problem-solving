#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,police=0,u=0;

    cin>>n;
    while(n--)
    {
        cin>>p;
        if(p>=0)
        {
            police+=p;
        }
        else
        {
            if(police>0)
            {
                police--;
            }
            else
                u++;

        }
    }
    cout<<u<<endl;

}
