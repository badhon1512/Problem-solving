#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k,r=0,c,a;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        r=0;
        c=0;


            if(s[i]=='+')
            {
                c=0;
                s[i]='0';
                k=i-1;

                while(c!=2)
            {
                if(s[k]!='0')
                {
                    c++;

                //cout<<s[k]-48;

                    r+=(s[k]-48);
                     s[k]='0';

                }
                k--;

            }
            //cout<<r;
            s[i]=r+48;
            //cout<<i<<s[i];

            }

            else if(s[i]=='-')
            {
                c=0;
                s[i]='0';
                k=i-1;

                while(c!=2)
            {
                if(s[k]!='0')
                {
                    c++;

                //cout<<s[k]-48;
                if(c==1)
                    a=s[k]-48;
                else
                    r=a-(s[k]-48);
                     s[k]='0';

                }
                k--;

            }
            //cout<<r;
            s[i]=r+48;

            }



            else if(s[i]=='*')
            {
                c=0;
                r=1;
                s[i]='0';
                k=i-1;

                while(c!=2)
            {
                if(s[k]!='0')
                {
                    c++;

                //cout<<s[k]-48;

                    r*=(s[k]-48);
                     s[k]='0';

                }
                k--;

            }
           // cout<<r;
            s[i]=to_string(r);

            }
           // cout<<r;






    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='0')
            cout<<s[i];
    }

}
