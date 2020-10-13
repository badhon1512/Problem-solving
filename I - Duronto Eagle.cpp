#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int q,n,x,y,Case=0;
    float distance;
    cin>>q;
    while(q--)
    {
        Case++;
        float Max=-1000000.0;
        int c=0;
        int  result;
        cin>>n;
        while(n--)
        {
            c++;
            cin>>x>>y;
            distance=sqrt(x*x+y*y);

            if(distance>Max)
            {
                Max=distance;

                result=c;
            }

        }
        cout<<"Case "<<Case<<": "<<result<<endl;
    }
}
