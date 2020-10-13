#include<iostream>
using namespace std;

int main()
{
    string s,c;
    cin>>s>>c;
    int len=s.size();
    int j=len-1;
    int i=0;
    while(i<len)
    {
        if(s[i]!=c[j])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        j--;
        i++;
    }
    cout<<"YES"<<endl;
}
