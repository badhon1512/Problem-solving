#include<iostream>
using namespace std;

int main()
{
    int n,total=0,diff;
    string original,terget;
    cin>>n>>original>>terget;
    for(int i=0;i<n;i++)
    {
        diff=abs(original[i]-terget[i]);
        if(diff>5)
        diff=10-diff;

        total+=diff;

    }
    cout<<total<<endl;
}
