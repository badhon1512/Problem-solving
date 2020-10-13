#include<bits/stdc++.h>
using namespace std;
 int n,Q;
 int ARR[100010];
 int ANS[100010];


int binarySearch(int x)
{
    int l = 0;
    int r = n - 1;
    int mid;
    int p = -1;
    while(l<= r)
    {
        mid = (r + l) / 2;
        if(ARR[mid] == x)
        {
            p = mid;
            r = mid - 1;
        }
        else if(ARR[mid] < x)
            l = mid + 1;
        else
            r= mid - 1;
    }
    return p;
}


int main()
{
    int i;
   scanf("%d",&n);
   cin>>Q;

   for(i=0;i<n;i++)
   {
       scanf("%d",&ARR[i]);
   }
   int pos;
   for(i=0;i<Q;i++)
   {
      scanf("%d",&pos);
      printf("%d\n",binarySearch(pos));
   }

}
