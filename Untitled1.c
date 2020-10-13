#include<bits/stdc++.h>
using namespace std;
int count;
int minimum(int number)
{
    count=0;
    while(num>0)
    {
        if(number>5)
        {
            number-=5;
            count++;
        }
        else
        {
            number-=2;
            count++;
        }
    }
    return count;
}
int main()
{
    cin>>number;
    cout<<minimum(number);
}
