#include<bits/stdc++.h>
using namespace std;
int A[5];
int multiply[5];
int main()
{

    int T,mul,j;
    cin>>T;
    while(T--)
    {
        j=0;

        for(int i=0;i<5;i++)
        {

            cin>>A[i];

        }

        sort(A,A+5);
        if(A[4]!=A[3])
        cout<<A[4]*A[3]<<endl;
        else if(A[4]!=A[2])
        cout<<A[4]*A[2]<<endl;
         else if(A[4]!=A[1])
        cout<<A[4]*A[1]<<endl;
        else
        cout<<A[4]*A[0]<<endl;



    }
}
