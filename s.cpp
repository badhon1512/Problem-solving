#include<iostream>
using namespace std;
int main()
{
    char s[3];
    cout<<"meyeti is :";
    cin>>s;
    if(s[2]=='n')
    {
        s[2]='u';
        cout<<"nope its "<<s;
    }
    else
        cout<<"yes "<<s;

}
