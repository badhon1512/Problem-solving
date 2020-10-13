#include<bits/stdc++.h>
using namespace std;
int main()
{
      int T,N,amount,total=0,c=0;
       char str[10];
    cin>>T;
    while(T--)
    {
        c++;

       total=0;

       cout<<"Case "<<c<<":"<<endl;

        cin>>N;

        while(N--)
        {

            cin>>str;

            if(strcmp(str,"donate")==0)
            {
                 cin>>amount;
                total+=amount;
            }
            else

                cout<<total<<endl;
        }
    }

}
