#include<bits/stdc++.h>
using namespace std;
int main()
{

    int s,n,x,y;
    vector<pair<int,int>> dragon;
    cin>>s>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        dragon.push_back(make_pair(x,y));
    }

    sort(dragon.begin(),dragon.end());


    for(int i=0;i<n;i++)
    {
       if(s>dragon[i].first){
            s+=dragon[i].second;
       }

       else
       {
            cout<<"NO"<<endl;
       return 0;
       }

    }
    cout<<"YES"<<endl;
    return 0;


}
