#include<bits/stdc++.h>
using namespace  std;
int A[100000];
int n,totalTexi=0,s;
bool flag=true;

void findTexiNumber()
{


    for(int i=0; i<n; i++)
    {
        flag=true;

        if(A[i]!=-1)
        {
            int total=A[i];


            for(int j=i+1; j<n; j++)
            {
                if(A[j]!=-1)
                {
                    if(A[i]+A[j]==4)
                    {
                        flag=false;
                        totalTexi++;
                        A[j]=-1;
                        break;
                    }
                    else (total<=4)
                    {
                        total+=A[j];
                        if()
                    }

                }


            }


        }

    }

    cout<<totalTexi<<endl;
}
int main()
{

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
        if(A[i]==4)
        {
            totalTexi++;
            A[i]=-1;


        }
    }



    findTexiNumber();

}
