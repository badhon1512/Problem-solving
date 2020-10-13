#include<stdio.h>
#include<string.h>
int main()
{
    int total=0,T,t,amount,c=0;
    char ch[30];
    scanf("%d",&T);
    while(T--)
    {

         scanf("%d",&t);
        getchar();
        total=0;
        c++;
         printf("Case %d\n",c);
        while(t--)
        {

          gets(ch);
           int l=strlen(ch);
           amount=0;

           if(ch[0]=='r')
           {
               printf("%d\n",total);
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
