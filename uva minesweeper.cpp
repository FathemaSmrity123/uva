#include<bits/stdc++.h>
using namespace std;
char a[200][200];
int b[200][200];
int n,m,a1,b1;
int fx[]= {0,0,1,-1,-1,1,-1,1};
int fy[]= {-1,1,0,0,1,1,-1,-1};
void ff(int x,int y)
{
    b[x][y]=-1;
    for(int i=0; i<8; i++)
    {
        a1=x+fx[i];
        b1=y+fy[i];
        if(a1>=0 && a1<n && b1>=0 && b1<m)
        {
            if(a[a1][b1]!='*')
            {
                b[a1][b1]=b[a1][b1]+1;
            }
        }
    }
}
int main()
{
    int c=1;
    while(cin>>n>>m,n>0 && m>0)
    {
        if(c>1)
            cout<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]!='*')
                    b[i][j]=0;
                else
                    b[i][j]=-1;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]=='*')
                {
                    ff(i,j);
                }
            }
        }
        cout<<"Field #"<<c++<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(b[i][j]==-1)
                    cout<<"*";
                else
                    cout<<b[i][j];
            }
            cout<<endl;
        }
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);

    }
    return 0;
}
