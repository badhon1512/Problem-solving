#include<iostream>
using namespace std;
int main()
{
    string s;
    int n,a=0,d=0;
    cin>>n;
    cin>>s;
    int i=0;
    while(i<n)
    {
        if(s[i]=='A')
            a++;
        else
            d++;

            i++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
    cout<<"Danik"<<endl;

    else
        cout<<"Friendship"<<endl;

}
