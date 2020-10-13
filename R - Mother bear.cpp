#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char newS[10000];
    int len,k,j,len2;
    bool ispalindrom=true;
    cin >> ws;
      while(true)
      {
        k=0;
        j=0;

        ispalindrom=true;


         getline(cin,s);

         if(s=="DONE")
         {
             break;
         }


        len=s.length();


        for(int i=0;i<len;i++)
        {
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
            {
                if(s[i]>=65&&s[i]<=90)
                {
                    s[i]+=32;
                }


               newS[k]=s[i];
               k++;
            }
        }

        len2=strlen(newS)-1;



        int l=0;
        while(len2>l)
        {
            if(newS[len2--]!=newS[l++])
            {
                ispalindrom=false;

            }
        }


         if(ispalindrom==true)
     cout<<"You won't be eaten!"<<endl;
         else
            cout<<"Uh oh.."<<endl;


      }
}
