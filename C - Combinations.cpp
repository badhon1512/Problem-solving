#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,k,kfact,fact,lastfact,sol;
    scanf("%d",&t);
    int c=0;
    while(t--)
    {
        c++;
        fact=1;
        kfact=1;
        lastfact=1;
        scanf("%d %d",&n,&k);
        for(int i=1;i<=n;i++)
        {
            fact=((i%1000003)*(fact%1000003))%1000003;

            if(i<=k)
            {
                 kfact=((i%1000003)*(kfact%1000003))%1000003;

            }



              if(i<=(n-k))
              {
                   lastfact=((i%1000003)*(lastfact%1000003))%1000003;

              }


        }
         sol=(fact)/(kfact*lastfact);

        cout<<"Case "<<c<<": "<<sol<<endl;

    }
}
