#include<bits/stdc++.h>
using namespace std;


/*void push(long long int x)
{
    index++;
    A[index]=x;

}
void pop()
{
    A[index]=0;
    index--;


}
void Max()
{

    cout<<*max_element(A.begin(), A.end())<<endl;
}*/
int main()
{
    vector<long long int>A;


    long long int t,a,previousmax=-1,maX=0,num;

    cin>>t;
    while(t--)
    {

        cin>>a;
        if(a==1)
        {
            cin>>num;
             if(A.empty())
              A.push_back(num);
             else
              A.push_back(max(num,A.front()));

            A.push_back(num);
        }
        else if(a==2)
        {
            if (!A.empty())
                     A.pop_back();
        }
        else
            cout<<A.front()<<endl;
    }

}
