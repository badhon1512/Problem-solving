#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,sum,solveProblem=0;
    cin>>n;
    while(n--)
    {
        sum=0;
        cin>>a>>b>>c;
        sum=a+b+c;

        if(sum>=2)
        solveProblem++;
    }
    cout<<solveProblem<<endl;
}
