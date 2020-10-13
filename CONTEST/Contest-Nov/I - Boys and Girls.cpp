#include<iostream>
using namespace std;

void print(int m)
{
    for(int i=1; i<=m*2; i++)
    {
        if(i%2!=0)
            cout<<"B";
        else
            cout<<"G";

    }
}

int main()
{
    int m,n;
    cin>>n>>m;

    if(m==n)
    {
        print(m);
    }

    else
    {
        if(n>m)
        {


            print(m);
            for(int i=1; i<=(n-m); i++)
                cout<<"B";


        }
        else
        {
            for(int i=1; i<=(m-n); i++)
                cout<<"G";
             print(n);

        }

    }
    cout<<endl;
}
