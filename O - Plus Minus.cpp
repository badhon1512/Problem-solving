#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int A[100];
int main()
{
    float negetive=0,positive=0,zero=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]<0)
            negetive++;
        else if(A[i]==0)
            zero++;
        else
            positive++;

    }


    printf("%.6f\n%.6f\n%.6f\n",(positive/n),(negetive/n),(zero/n));
}
