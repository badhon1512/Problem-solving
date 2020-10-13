#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    int len,temp;
    cin>>str;

    len=str.length();
    if(len==1)
    {
        cout<<str[0]<<endl;
        return 0;

    }
    for(int i=0;i<len;i++)
    {


        for(int j=0;j<len-i-1;j++)
        {

            if(j==0 || j%2==0)
            {
                if(str[j]>str[j+2])
                {
                    temp=str[j];
                    str[j]=str[j+2];
                    str[j+2]=temp;
                }
            }
        }
    }

    cout<<str<<endl;


}
