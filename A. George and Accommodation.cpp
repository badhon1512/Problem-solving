#include<iostream>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n;
    int c=0;
    while(n--)
    {
        cin>>p>>q;
        if(q-p>=2)
        {
            c++;
        }
    }

    cout<<c<<endl;
}
