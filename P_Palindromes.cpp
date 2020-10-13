#include<iostream>
using namespace std;
int main()
{
    string s;
    bool isPalindromes,mirror;
    int len;
    while(cin>>s)
    {
        isPalindromes=true;
        mirror=true;

        int l=0;
      len=s.length()-1;
      for(int i=0;i<len;i++)
      {
          if(s[i]=='3')
          {
              s[i]='E';
              mirror=false;
          }
          else if(s[i]=='L')
          {
              s[i]='J';
              mirror=false;
          }
          else if(s[i]=='J')
          {
              s[i]='L';
              mirror=false;
          }
          else if(s[i]=='2')
          {
              s[i]='S';
              mirror=false;
          }
            else if(s[i]=='5')
          {
              s[i]='Z';
              mirror=false;
          }
          else if(s[i]=='S')
          {
              s[i]='2';
              mirror=false;
          }
          else if(s[i]=='E')
          {
              s[i]='3';
              mirror=false;
          }
          else if(s[i]=='Z')
          {
              s[i]='5';
              mirror=false;
          }
          else
            mirror=true;
      }

      while(len>l)
      {


          if(s[l++]!=s[len--])
          {
              isPalindromes=false;
          }


      }
      if(isPalindromes==true)
      cout<<"yes"<<endl;
      else
        cout<<"NO"<<endl;
    }
}
