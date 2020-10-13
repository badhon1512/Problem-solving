#include<iostream>
using namespace std;
int main()
{
    int x,y,z,xSum=0,ySum=0,zSum=0,q;
    cin>>q;
    while(q--)
    {
        cin>>x>>y>>z;
        xSum+=x;
        ySum+=y;
        zSum+=x;
    }
    if(xSum==0&&ySum==0&&zSum==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
