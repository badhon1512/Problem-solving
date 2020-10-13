#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
int main()
{
    double r,s,a,ans;
    int T;
    cin>>T;

    for(int i=0;i<T;i++)
    {
        scanf("%lf",&r);

    s=(2*r)*(2*r);
    a=PI*(r*r);
    ans= s-a+0.000000010;
 printf("Case %d: %.2lf\n",i+1,ans);
    }

}
