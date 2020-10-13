#include<bits/stdc++.h>
using namespace std;
int A[10];
int B[10];
int main()
{
    int rem,j,ans=0;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    sort(A,A+N);
    rem=A[N-1];
     B[0]=A[N-1];
    for(int i=0;i<N;i++)
    {
        j=N-2;
       rem-=A[i];
       if(rem>0)
       {
            B[i+1]=A[i];
            ans+=A[i];
       }

       else
       {
           rem+=(A[i]+A[j]);
           B[i+1]=A[j];
           ans+=A[j];
           j--;
       }

    }
    if(ans<0||ans>99999999)
    {
        cout<<"Error"<<endl;
    }
    else
    {


    for(int i=0;i<N;i++)
    {
        cout<<B[i]<<endl;
    }
    }
}
