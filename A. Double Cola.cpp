#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int q;
    cin>>n;
    q=n%5;
    if(q==0)
    {
        cout<<"Howard"<<endl;
    }
    else if(q==1)
    {
        cout<<"Sheldon"<<endl;
    }
    else if(q==2)
    {
        cout<<"Leonard"<<endl;
    }
    else if(q==3)
    {
        cout<<"Penny"<<endl;
    }
    else
        cout<<"Rajesh"<<endl;
}
