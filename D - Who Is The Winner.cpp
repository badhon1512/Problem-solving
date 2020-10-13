#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,s,p,ls,lp;
    string name,lname;
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>name>>s>>p;
            if(i==0)
            {
                ls=s;
                lp=p;
                lname=name;
            }
            else
            {
                if(s>ls)
                {
                    lname=name;
                }
                else if(s==ls&&p<lp)
                {
                    lname=name;
                }
                else
                    lname=lname;
            }


        }

          cout<<lname<<endl;

    }
}
