#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long long int n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        if((n%2!=0||(n%4==0&&(n/4)%2!=0))&&(n!=6))
        {cout<<"First Box"<<endl;

        }
        else
            cout<<"Second Box"<<endl;

    }
}
