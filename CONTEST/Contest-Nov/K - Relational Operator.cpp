
 #include<iostream>
 using namespace std;

 int main()
 {
     long long a,b;
     int q;

     cin>>q;
     while(q--)
     {
         cin>>a>>b;
         if(a>b)
         cout<<">"<<endl;
         else if(a<b)
            cout<<"<"<<endl;
         else
            cout<<"="<<endl;


     }

 }
