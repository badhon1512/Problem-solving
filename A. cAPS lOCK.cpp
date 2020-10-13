#include<bits/stdc++.h>
using namespace std;
char A[101];
int main()
{
    int len,upp=0;
    cin>>A;
    len=strlen(A);
    for(int i=1;i<len;i++)
   {
       if(A[i]>='A'&&A[i]<='Z')
        upp++;
   }
  if(upp==len-1){

   for(int i=0;i<len;i++)
   {
       if(A[i]>='A'&&A[i]<='Z')
        A[i]+=32;
       else if(A[i]>='a'&&A[i]<='z')
        A[i]-=32;

   }
  }
   cout<<A<<endl;
}

