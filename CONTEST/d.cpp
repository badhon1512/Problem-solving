
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,j;
    cin>>T;
    int A[2];
    int B[T];
    for(i=0;i<T;i++)
    {
       B[i]=0;
        for(j=0;j<2;j++)
        {
            cin>>A[j];

        }

      B[i]= abs((A[0]-A[1])*4)+3+3+5+(A[0]*4)+3+5;

    }
    for(i=0;i<T;i++)
{
    cout<<"Case "<<i+1<<": ";
    cout<<B[i]<<endl;

}
}
