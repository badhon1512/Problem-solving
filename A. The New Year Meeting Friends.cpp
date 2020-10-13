#include<bits/stdc++.h>
using namespace std;
int A[3];
int main()
{
    int x,y,z,place,distance;
    cin>>A[0]>>A[1]>>A[2];
   sort(A,A+3);
    distance=abs(A[0]-A[1])+abs(A[1]-A[2]);
    cout<<distance<<endl;
}
