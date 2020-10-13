#include<iostream>
using namespace std;
int main()
{
    string s;
    int len;
    cin>>s;
    len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='.')
        {
            cout<<"0";
        }
        else
        {
            if(s[i]=='-')
            {
                if(s[i+1]=='.')
                {
                    cout<<"1";
                    i++;
                }
                else
                {
                     cout<<"2";
                     i++;

                }

            }
        }


    }
    cout<<endl;
}
