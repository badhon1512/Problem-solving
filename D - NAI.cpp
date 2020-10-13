#include<bits/stdc++.h>
using namespace std;
int main()
{
    int L,R,P,_max,_min;
    float n;
    cin>>L>>R>>P;
    _max=max(L,R);
    _min=min(L,R);
    n=(float)(_max*P)/(float)100;


    if(L==R||_min>=n)
    {
        cout<<"Ambidextrous"<<endl;
    }
    else if(L>R)
    {
        cout<<"Left-handed"<<endl;
    }
    else
        cout<<"Right-handed"<<endl;

}
