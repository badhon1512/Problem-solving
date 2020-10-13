#include<iostream>
using namespace std;
int main()
{
    int n,p,k,first,last;
    cin>>n>>p>>k;
    first=abs(p-k);
    last=p+k;
    if(first>1)
            cout<<"<< ";
    for(int i=first;i<=last;i++)
    {
        if(i<1)
        continue;
        if(i>n)
            break;
        if(i==p)
        {
            cout<<"("<<i<<")"<<" ";
        }
        else
            cout<<i<<" ";

    }
    if (last<n)
        cout<<">>";

    cout<<endl;
}
