#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int sum1,sum2,len1,len2,one,ten;
    while(getline(cin,s1),getline(cin,s2))
    {
        sum1=0;
        sum2=0;
        len1=s1.length();
        for(int i=0; i<len1; i++)
        {
            if(islower(s1[i]))
            {
                sum1+=s1[i]-97+1;

            }

            else if(isupper(s1[i]))
            {
                sum1+=s1[i]-65+1;
            }

        }
        if(sum1%9==0)
            sum1=9;
        else
        {
            sum1=sum1%9;
        }

        len2=s2.length();
        for(int i=0; i<len2; i++)
        {
            if(islower(s2[i]))
            {
                sum2+=s2[i]-97+1;

            }

            else if(isupper(s2[i]))
            {
                sum2+=s2[i]-65+1;
            }

        }
        if(sum2%9==0)
            sum2=9;
        else
        {
            sum2=sum2%9;
        }


        if(sum1>=sum2)
        {
            printf("%.2f %\n",sum2*100.0/sum1);
        }

        else
        {
            printf("%.2f %\n",sum1*100.0/sum2);
        }

    }





}

