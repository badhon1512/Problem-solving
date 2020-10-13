#include<iostream>
using namespace std;
int A[100][100];
int main()
{
    int n,leftSum=0,rightSum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
            if(i==j)
            {

             leftSum+=A[i][j];
            }
            if (i==n-j-1)
                rightSum += A[i][j];
        }
    }
    cout<<abs(leftSum-rightSum)<<endl;

}
