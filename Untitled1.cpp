#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number,_count=0;
    cin>>number;
    while(number>0)
    {

        if(number>=10)
        {
            number-=5;
            _count++;
        }
        else if(number%2!=0&&number>=5)
        {
             number-=5;
            _count++;

        }
        else
        {
            number-=2;
            _count++;


        }
    }
    cout<<_count<<endl;

}
