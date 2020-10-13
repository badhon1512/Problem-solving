#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,oddi,eveni,odd=0,even=0,num;
   cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>num;
      if(num%2==0)
      {
          even++;
          eveni=i;
      }
      else
      {
        odd++;
        oddi=i;
      }

  }
  if(odd==1)
    cout<<oddi<<endl;
  else
    cout<<eveni<<endl;


}




