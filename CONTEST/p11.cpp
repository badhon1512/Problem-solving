#include<iostream>
using namespace std;
int main()
{
    int T,i,num;
    string fact;
    cin>>T;
    while(T--)
    {

        cin>>num;
        for(i=num;i>=1;i--)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
    }
}
