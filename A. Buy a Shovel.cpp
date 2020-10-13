#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,price=0,s=1;
    cin>>k>>r;
    price=k;

    while((price%10!=0))
    {
         if((price%10==r))
            break;

        s++;


        price+=k;




    }
    cout<<s<<endl;
}
