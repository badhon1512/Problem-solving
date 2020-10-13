#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int A[6][6];
int  main()
{
    int i,j,sum=0,maximum=INT_MIN;;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>A[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            sum=(A[i][j]+A[i][j+1]+A[i][j+2])+(A[i+1][j+1])+(A[i+2][j]+A[i+2][j+1]+A[i+2][j+2]);
            if(sum>maximum)
        {
            maximum=sum;
        }
        }


    }
    cout<<maximum<<endl;

}
