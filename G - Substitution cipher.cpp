#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
    int len,len2;

    cin>>len;
    string c;
    string s;
    int q;






    cin>>c;
    cin>>q;

    while(q--)
    {

        fflush(stdin);

        getline(cin,s);


        len2=s.length();


        for(int i=0;i<len2;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(s[i]==c[j])
                {
                    if(j==len-1)
                    {
                        s[i]=c[0];

                        break;

                    }
                    else
                    {
                        s[i]=c[j+1];
                        break;
                    }

                }

            }

        }
        cout<<s<<endl;

        s="";




    }

}
