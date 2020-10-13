#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int T,OR,R,B;
    float CRR,RR,O,RO;
    cin>>T;
    while(T--)
    {
        cin>>OR;
        cin>>R;
        cin>>B;
        O=((float)(300-B)/6);
        RO=((float)B)/6;

        CRR=(float)R/O;
        RR=((OR+1)-R)/RO;
        cout<<fixed << setprecision(2)<<CRR<<" ";
        cout<<fixed << setprecision(2)<<RR<<" ";


    }
}
