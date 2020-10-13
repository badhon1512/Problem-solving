#include<iostream>
using namespace std;

int main()
{
    int n,ans=1,x=1;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++)
        cin>>c[i];

   for(int i=1;i<n;i++)
   {
       if(c[i]>=c[i-1])
       {
           ans++;
       }
       else
       {
           if(ans>x)
            x=ans;

           ans=1;
       }

   }
   if(ans>x)
            x=ans;
   cout<<x<<endl;
}
