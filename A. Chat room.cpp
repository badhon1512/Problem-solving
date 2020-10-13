#include<bits/stdc++.h>
using namespace std;
char S[101];
char ch[6]="hello";







int main()
{
    cin>>S;
    int len=strlen(S);
    int i=0;
    int j=0;
    int c=0;
    while(i<=len)
    {
        if(S[i]==ch[j])
        {
            j++;
            c++;
        }
        if(c==5)
            break;

            i++;
    }
    if(c==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
