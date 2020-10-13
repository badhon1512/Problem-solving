#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int A[10];
int main()
{
    int q,a,d;
    cin>>q;
    cout<<"Lumberjacks:"<<endl;
    while(q--)
    {
        a=1;
        d=1;
        for(int i=0;i<10;i++)
        {
            cin>>A[i];
            if(i>=1)
            {
                if(A[i]>=A[i-1])
                {
                    a++;
                }
                if(A[i]<=A[i-1])
                {
                    d++;
                }
            }
        }


        if(a==10||d==10)
        {
            cout<<"Ordered"<<endl;
        }
        else
        {
            cout<<"Unordered"<<endl;
        }

    }
}
