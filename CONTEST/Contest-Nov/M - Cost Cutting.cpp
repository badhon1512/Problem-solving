#include<bits/stdc++.h>
using namespace std;
int A[3];
int main()
{
    int c=0;
    int T;
    cin>>T;
    while(T--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>A[i];
        }
        sort(A,A+3);
        c++;

        cout<<"Case "<<c<<": "<<A[1]<<endl;
    }
}
