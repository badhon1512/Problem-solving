#include<bits/stdc++.h>
using namespace std;
int main()
{





    int number;
    int flag=0;



    cout<<"enter the number: ";
    cin>>number;

    for(int i=1; i<=number; i++)
    {
        flag=0;
        for(int j=2; j<=(i/2); j++)
        {
            if(i%j==0)
            {
                flag++;
                break;

            }




        }
        if(flag!=0)
            cout<<i<<endl;
    }




    //10 % 2 =
    // 2 3 4 5

    // number * 1 =1
    //mumber*2=*/
    // num=num*(num-1)*(num-2)...1
    // 7!=7*6*5*4*3*2*1

}
