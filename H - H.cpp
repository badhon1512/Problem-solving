#include<bits/stdc++.h>
using namespace std;
int main()
{

    int c,f=0;

    cin>>c;


    while(c>0)
    {

        if(c>=3)
        {
            c-=3;
            f+=2;
        }
        else if(c==2)
        {
             c-=2;
            f+=2;
        }
        else
        {
            c-=1;
        f++;
        }


    }
    cout<<f<<endl;

}
