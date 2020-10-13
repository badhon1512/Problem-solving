#include<bits/stdc++.h>
using namespace std;
void initialize(int A[],int size[],int n)
    {
    for(int i=1;i<n;i++)
        {
        A[i]=i;
        size[i]=1;
    }
}
int root(int A[],int i)
    {
    while(A[i]!=i)
        {
        i=A[i];
    }
    return i;
}
void unione (int A[],int size[],int a,int b)
    {
    int root_a=root(A,a);
   int  root_b=root(A,b);

    if(size[root_a]<size[root_b])
        {
        A[root_a]=A[root_b];
        size[root_b]+=size[root_a];
    }
    else
        {
         A[root_b]=A[root_a];
        size[root_a]+=size[root_b];
    }
}
bool connected(int A[],int a,int b)
    {
  int  root_a=root(A,a);
    int root_b=root(A,b);
    if(root_a==root_b)
        {
        return true;
    }
    else
        return false;
}
int makelibrary(vector <int,int> v[],int A[],int size,int cl,int cr,int m)
    { int cost =cl;
       unione(A,size,v[1],v[1][1]);
    for(int i=1;i<=m;i++)
        {
        for(int j=0;j<v[i].size();j++)
            {
            if(connected(A,v[i],v[i][j])==false)
                {
            unione(A,size,v[i],v[i]v[j]);
            cost+=cr;
            }
        }
    }
     return cost;
}
int main()
    {
    int t;
    cin>>t;
    while(t--)
        {
    vector <int ,int> v[10];
    int cost =0;
    int n,m,cl,cr;

    cin>>n>>m>>cl>>cr;
    int A[n+1];
    int size[n+1];
    initialize(A,size, n);
    for(int i=0;i<m;i++)
        {
        int x,y;

        cin>>x>>y;
        v[x].push_back(y);

    }
    if(cl>cr)
        {
          cost =m*cl;
    }
    else if(cr>cl)
        {
        cost =makelibrary( v[10], A,size, cl, cr,m);
    }
    cout<<cost<<endl;
    }
    return 0;
}
