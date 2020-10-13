#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1005];
    int c=0;

    gets(s);
    int len=strlen(s);

    sort(s,s+len);

   for(int i=0;i<len;i++)
   {
       if(s[i]>=97&&s[i]<=122)
        {
         c++;
         if(s[i]==s[i+1])
         {
             c--;
         }


        }
   }
   cout<<c<<endl;



}
