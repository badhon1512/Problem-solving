#include<bits/stdc++.h>
using namespace std;
int A[10000];
int main()
{
    int N,K,T,c,maX;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(int i=1;i<N;i++)
        {
            maX=A[i];

            for(int j=0;j<K-1;j++)
            {

                if(A[j+i-1]>A[i+j])

                    maX=A[i-1];
            }
            cout<<maX<<" ";





        }
        cout<<endl;

    }

}
