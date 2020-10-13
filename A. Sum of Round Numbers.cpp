#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,len,n,total=0,div;
    string num;
    cin>>t;
    while(t--)
    {

        cin>>n;
        num=to_string(n);
        len=num.length();
        int i=0;
        total=0;
        div=10;
        while(len>i)
        {
            if(num[i]!='0')
            {
                total++;

            }

            i++;
        }
        cout<<total<<endl;
        while(n!=0)
        {
            if(n==10000)
            {
                cout<<10000<<endl;
                break;
            }
            else if(n>1000)
            {
                cout<<(n/1000)*1000<< " ";
                n-=((n/1000)*1000);

            }
            else if(n>100)
            {
                cout<<(n/100)*100<< " ";
                n-=((n/100)*100);

            }
            else if(n>100)
            {
                cout<<(n/100)*100<< " ";
                n-=((n/100)*100);

            }
            else if(n>10)
            {
                cout<<(n/10)*10<< " ";
                n-=((n/10)*10);

            }
            else{
                cout<<n;
                n-=n;

            }









        cout<<endl;








    }
    }
}

