#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    int c=0;
    cin>>ch;

    int len=strlen(ch);
    int i=0;
   while(i<=len)
   {
       if(ch[i]==ch[i+1])
       {
           c++;
           if(c==6)
           {
               cout<<"YES"<<endl;
               return 0;
           }
           i++;

       }
       else
       {
           c=0;
           i++;
       }

   }
   cout<<"NO"<<endl;

}
