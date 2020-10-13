#include<iostream>
using namespace std;
int main()
{
    int n,bonus;
    cout<<"Enter the numbers of student ______:";
    cin>>n;
    int marks[n];
    cout<<"enter the marks : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];

    }
    cout<<"Bonus number : ";
    cin>>bonus;
    cout<<"Marks with bonus : "<<endl;
    for(int i=0;i<n;i++)
    {
        if(marks[i]+bonus>100)
        {
            cout<<100<<endl;
            continue;
        }

        cout<<marks[i]+bonus<<endl;

    }

}

