#include<bits/stdc++.h>
using namespace std;
int main()
{
    /** set **/
    set<string>s;
    set<string>::iterator it;
    s.insert("smrity");
    s.insert("sumaiya");
    s.insert("taniya");
    s.insert("mouri");
    s.insert("nuren");
    s.insert("Nuren");
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    /** multiset**/
     multiset<int>ss;
     multiset<int>::iterator it1;
     ss.insert(100);
     ss.insert(299);
     ss.insert(100);
     ss.insert(1);
     for(it1=ss.begin();it1!=ss.end();it1++)
     {
         cout<<*it1<<endl;
     }

   /** pair set **/
   set<string>st;
   set<string>::iterator i;
   st.insert("smrity");
   st.insert("tanu");
   st.insert("mouri");
   st.insert("maisha");

   pair<set<string>::iterator,bool>p;
   p=st.insert("maisha");
   if(p.second==false)
    cout<<"cant insert"<<endl;
   else
    cout<<"inserted"<<endl;
    return 0;
}

