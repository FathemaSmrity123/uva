#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;
    int m,n;
    long long int prize;
    string s;
    cin>>m>>n;
    while(m--)
    {
        cin>>s>>prize;
        mp[s]=prize;

    }
    while(n--)
    {
        long long int sum=0;
        while(cin>>s){
        if(s==".")
            break;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(s==it->first)
                sum=sum+it->second;
        }

        }
        cout<<sum<<endl;
    }
    return 0;
}
