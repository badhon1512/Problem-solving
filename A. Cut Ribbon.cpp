#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    int A[3];
    cin>>n;
    for(int i=0;i<3;i++)
    {
        cin>>A[i];
    }
    sort(A,A+3);
   while(n>=0){
    for(int i=0;i<3;i++)
    {
        n-=A[i];
        if(n>=0)
            t++;
    }
}


    cout<<t<<endl;
}
