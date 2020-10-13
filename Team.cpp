#include<iostream>
using namespace std;
int main()
{
    int n,A[3],c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[0]>>A[1]>>A[2];
        if((A[0]==1&&A[1]==1)||(A[0]==1&&A[2]==1)||(A[1]==1&&A[2]==1))
            c++;
    }
    cout<<c<<endl;
}
