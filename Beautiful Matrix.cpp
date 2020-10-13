#include<iostream>
using namespace std;
int main()
{
    int A[6][6];
    int x,y,dis;
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    dis=abs(x-3)+abs(y-3);
    cout<<dis<<endl;



}
