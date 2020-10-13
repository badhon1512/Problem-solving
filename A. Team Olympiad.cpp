#include<bits/stdc++.h>
using namespace std;
int B[3]={0};
int main()
{
   int n,a,x=0,y=0,z=0;
   int t1[5000],t2[5000],t3[5000];
   vector<int> A;
   cin>>n;
   for(int i=0;i<n;i++)
   {

       cin>>a;
       if(a==1)
       {
         t1[x]=i+1;
         B[0]++;
         x++;
       }

        else if(a==2)
        {
            t2[y]=i+1;
            B[1]++;
            y++;
        }

        else
        {
             t3[z]=i+1;
             B[2]++;
             z++;
        }

       A.push_back(a);
   }
   sort(B,B+3);
   int total=B[0];
   cout<<total<<endl;
   for(int i=0;i<total;i++)
   {
       cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
   }


}
