#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    bool flag=false;
    cin>>n>>m;
    char s;
    for(int i=0;i<n*m;i++)
    {
        cin>>s;
        if(s=='C'||s=='M'||s=='Y')
            flag=true;
    }
    if(flag)
    {
        cout<<"#Color"<<endl;
    }
    else
        cout<<"#Black&White"<<endl;
}
