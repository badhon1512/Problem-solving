#include <bits/stdc++.h>
using namespace std;
int main()
{
    int SIZE;
    cin>>SIZE;
    int A[SIZE];
    for(int i=0;i<SIZE;i++)
    cin>>A[i];
    int b=0;
    int total=0;
    sort(A,A+SIZE);
    b=A[0];
    for(int i=1;i<SIZE;i++)
    {
        if(A[i]-b>4)
        {
            total++;
            b=A[i];
        }
    }
    cout<<total+1;

}
