#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,l=0,y,rem;
    cin>>n;
    for(int i=1867;i<(1867+n);i++)
    {

       if (((i% 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
        {
            l++;

        }
    }

    int day=(n*365)+l;
       rem=day%7;
       if(rem==0)
         cout<<"Sunday"<<endl;
      else if(rem==1)
        cout<<"Monday"<<endl;
       else if(rem==2)
        cout<<"Tuesday"<<endl;
       else if(rem==3)
        cout<<"Wednesday"<<endl;
        else if(rem==4)
        cout<<"Thursday"<<endl;
        else if(rem==5)
        cout<<"Friday"<<endl;
        else if(rem==6)
        cout<<"Saturday"<<endl;





}
