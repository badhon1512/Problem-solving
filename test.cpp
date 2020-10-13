#include<bits/stdc++.h>
using namespace std;
int mian()
{
    vector<long long int>A;


    int t,a;
    long long int num;
    cin>>t;
    while(t--)
    {

        cin>>a;
        if(a==1)
        {
            cin>>num;
            A.push_back(num);
        }
        else if(a==2)
        {
            A.pop_back();
        }
        else
            cout<<*max_element(A.begin(), A.end())<<endl;
    }
}

