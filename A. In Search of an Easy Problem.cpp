
#include<iostream>
using namespace std;

int main()
{
    int q,n;
    bool hard=false;
    cin>>n;
    while(n--)
    {
        cin>>q;
        if(q==1)
        {
           hard=true;
        }
    }
    if(hard==true)

        cout<<"HARD"<<endl;

    else
        cout<<"EASY"<<endl;
}
