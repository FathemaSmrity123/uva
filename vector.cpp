#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vc,y;
    int n,element;
    vc.push_back(1);
    vc.push_back(2);
    vc.push_back(3);
    for(int i=0;i<vc.size();i++)
    {
        cout<<vc[i]<<endl;
    }
    y=vc;
     for(int i=0;i<y.size();i++)
    {
        cout<<y[i]<<endl;
    }
    vector<int>v;
    vector<int>:: iterator j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    /**max and min element**/
    cout<<*min_element(v.begin(),v.end())<<endl;
    cout<<*max_element(v.begin(),v.end())<<endl;
    for(j=v.begin();j<v.end();j++)/** displaying vector by iterator**/
    {
        printf("%d\n",*j);
    }
    v.pop_back();

    return 0;
}

