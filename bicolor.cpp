#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int color[100];
int vis[100];
void bfs(int s)
{
    int c=0;
    queue<int>q;
    q.push(s);
    vis[s]=1;
    color[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int g=adj[u][i];
            if(vis[g]==0)
            {
                vis[g]=1;
                color[g]=1;
                q.push(g);

            }
            else
            {
                if(color[u]!=color[g])
                {
                    c=0;
                }
                else
                {
                    c=1;
                    break;
                }
            }

        }
        if(c==1)
        {
            cout<<"not bicolorable"<<endl;
            break;
        }
    }
    if(c==0)
    {
        cout<<"bicolorable"<<endl;
    }
}
int main()
{

    int node,edge,n,x,y;
    cin>>node>>edge;
    for(int i=1; i<=edge; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(y);

    }
    bfs(1);
    return 0;
}

