#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;
    int test,c;
    double f,k,l,o;
    string s;
    cin>>test;
    getchar();
    getchar();

    while(test--)
    {
        c=0;
        while(getline(cin,s))
        {
            if(s.size()==0)
                break;
            if(mp.count(s)==0)
                mp[s]=1;
            else
                mp[s]=mp[s]+1;
            c++;
        }
        for(it=mp.begin();it!=mp.end();it++)
        {
         cout<<it->first<<" ";
         l=it->second;
         o=(l/c)*100;
         printf("%.4f\n",o);
        }
        mp.clear();
        if(test)
            cout<<endl;
    }
    return 0;
}
