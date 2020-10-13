#include<bits/stdc++.h>
using namespace std;


int dToB(int x);
int main()
{
    int decimal1,decimal2,decimal3,decimal4;
    int binary1,binary2,binary3,binary4;
    int T,c=0;
    cin>>T;

    while(T--)
    {

        c++;
        scanf("%d.%d.%d.%d",&decimal1,&decimal2,&decimal3,&decimal4);
        scanf("%d.%d.%d.%d",&binary1,&binary2,&binary3,&binary4);

        if( dToB(decimal1)==binary1&&dToB(decimal2)==binary2&&dToB(decimal3)==binary3&&dToB(decimal4)==binary4)
            cout<<"Case "<<c<<": Yes"<<endl;
        else
            cout<<"Case "<<c<<": No"<<endl;

    }
}
int dToB(int decimal)
{
    int place=1,binary=0;
    while(decimal!=0)
    {
        binary+=(decimal%2*place);

        decimal/=2;
        place*=10;
    }
    return binary;
}


