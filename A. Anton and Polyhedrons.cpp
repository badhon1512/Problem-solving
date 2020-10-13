#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t=0;
    string s;

    int n;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="Tetrahedron")
        {
            t+=4;
        }
        else if(s=="Cube")
        {
            t+=6;

        }
        else if(s=="Octahedron")
        {
            t+=8;

        }
        else if(s=="Dodecahedron")
        {
            t+=12;

        }
        else if(s=="Icosahedron")
        {
            t+=20;

        }


    }
    cout<<t<<endl;
}
