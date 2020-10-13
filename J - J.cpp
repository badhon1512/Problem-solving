#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,r,R;
    cin>>t;
    while(t--)
    {

        cin>>R>>r;
        if((3.1416*R*R)>((3.1416*r*r)*2))
        {

            cout<<1<<endl;
        }
        else
            cout<<2<<endl;
    }
}
