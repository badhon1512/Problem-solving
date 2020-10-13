#include<bits\stdc++.h>
using namespace std;
int main()
{
    int total=0,T,t,amount,c=0;
    char ch[30];
    cin>>T;
    while(T--)
    {

        cin>>t;
        getchar();
        total=0;
        c++;
         cout<<"Case "<<c<<":"<<endl;
        while(t--)
        {

          gets(ch);
           int l=strlen(ch);
           amount=0;

           if(ch[0]=='r')
           {
               cout<<total<<endl;
           }
           else
           {
           for(int i=7;i<l;i++)
           {

               amount=amount*10+(ch[i]-48);
           }
           total=total+amount;
           }
        }
    }
}
