#include<bits/stdc++.h>
using namespace std;
#define MAXC 2000
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
int main()
{
    string s1,s2;
    int l1,l2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        l1=s1.size();
        l2=s2.size();
        for(int i=1;i<=l1;i++)
            for(int j=1;j<=l2;j++)
            {
                if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
                else
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        cout<<dp[l1][l2]<<endl;
    }
return 0;
}
