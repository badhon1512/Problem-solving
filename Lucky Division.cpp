#include<iostream>
using namespace std;
int A[]={4,7,44,47,74,77,444,447,474,477,777,774,747};

void luckyNumber(int n)
{
    for(int i=0;i<13;i++)
    {
        if(n%A[i]==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main()
{
    int number;
    cin>>number;
    luckyNumber(number);

}
