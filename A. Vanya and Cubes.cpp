#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,c=0,t=0;
    cin>>n;
    for(int i=1;;i++)
    {


        t+=((i*(i+1))/2);

        if(t>n)
            break;
        c++;
    }
    cout<<c<<endl;
}
