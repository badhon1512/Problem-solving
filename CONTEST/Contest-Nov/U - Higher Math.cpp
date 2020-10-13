#include<bits/stdc++.h>
using namespace std;
int A[3];
int main()
{
    int T,x,y,c=0;
    cin>>T;

    while(T--)
    {
        c++;
        for(int i=0;i<3;i++)
        {
            cin>>A[i];
        }
        sort(A,A+3);
        x=pow(A[2],2);
        y=pow(A[0],2)+pow(A[1],2);
        if(x==y)
            cout<<"Case "<<c<<": "<<"yes"<<endl;

            else
             cout<<"Case "<<c<<": "<<"no"<<endl;


    }
}

