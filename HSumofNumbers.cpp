#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    float x,y,sum=0;
    cin>>q;


    while(q--)
    {
        cin>>x>>y;
        sum=x+y;
        printf("%.1f\n",sum);
    }
}
