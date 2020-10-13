#include<bits/stdc++.h>
using namespace std;
int marks[100];
int main()
{
    int T,m,c,add,N;
    cin>>T;
    while(T--)
    {
        m=0;
        c=0;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>marks[i];


            if(marks[i]>m)
                m=marks[i];
        }
        add=(100-m);
        for(int i=0;i<N;i++)
        {
            if(marks[i]+add>=50)
                c++;
        }
        cout<<c<<endl;

    }
}
