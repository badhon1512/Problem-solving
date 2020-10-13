#include<iostream>
using namespace std;
int main()
{
    int n,match,c=0,h,g;
    cin>>n;
   // match=n*(n-1);
    int H[n];
    int G[n];
    for(int i=0;i<n;i++)
    {
        cin>>h>>g;
        H[i]=h;
        G[i]=g;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(H[i]==G[j])
                c++;
        }

    }
    cout<<c<<endl;
}
