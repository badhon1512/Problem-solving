
  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
      int t,a,b,diff;
      float Move;
      cin>>t;
      while(t--)
      {
          cin>>a;
          cin>>b;
          diff=abs(a-b);
          cout<<int(ceil(diff/10.0))<<endl;

      }
  }
