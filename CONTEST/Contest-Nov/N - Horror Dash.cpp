#include<iostream>
using namespace std;

int main()
{
    int T,n,c=0,Max,speed;

    cin>>T;
    while(T--)
    {
        c++;
        Max=0;
        cin>>n;
        while(n--)
        {
            cin>>speed;
            Max=max(speed,Max);
        }
        cout<<"Case "<<c<<": "<<Max<<endl;
    }
}
