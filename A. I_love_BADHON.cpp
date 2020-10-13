#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,best,worst,amazing=0,first,point;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>point;
        if(i==0){
        best=point;
        worst=point;
        }
        else
        {
            if(point>best)
            {
                amazing++;
                best=point;

            }
            else if(point<worst)
            {
                 amazing++;
                worst=point;

            }
            else{

            }
        }
    }
    cout<<amazing<<endl;


}
