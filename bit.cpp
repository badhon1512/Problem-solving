#include<iostream>
using namespace std;
int main()
{
    int X=0,q;
    cin>>q;
    string s;
    while(q--)
    {
        cin>>s;
        if(s=="++X" || s=="X++")
        {
            X++;
        }
        else
            X--;

    }
    cout<<X<<endl;
}
