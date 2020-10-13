
#include<iostream>
using namespace std;
int main()
{
    int s;

    cin>>s;
    int A[2];
    int B[s];
    for(int i=0;i<s;i++)
    {
        B[i]=0;
        for(int j=0;j<2;j++)
        {
            cin>>A[j];
            B[i]=B[i]+A[j];
        }


    }
    for(int i=0;i<s;i++)
    {
        cout<<"Case "<<i+1<<": ";
        cout<<B[i]<<endl;
    }
}
