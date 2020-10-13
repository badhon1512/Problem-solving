#include<iostream>
using namespace std;
int main()
{
    long long int n,m,r,t=0,A;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        cin>>A;
        if(i==0)
        {
            r=A;
            t+=A;
            continue;

        }
        if(A<r)
        {
            t+=((n-r)+A);
            r=A;
        }
        else
        {

            t+=(A-r);
            r=A;
        }
    }
    cout<<t-1<<endl;
}
