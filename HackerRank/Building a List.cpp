#include<bits/stdc++.h>
using namespace std;
void get(set<string>& se, string s)
{
    if(s.length()==0)
        return;
    if(se.find(s)==se.end())
    {
        se.insert(s);
        for(int i=0;i<s.size();i++)
        {
            string t=s;
            t.erase(i,1);
            get(se,t);
        }
    }
}

int main()
{ int t;
 cin>>t;
 while(t--)
 {
    int n;
     cin>>n;
     string s;
     cin>>s;
     set<string>se;
     set<string>:: iterator it;
     get(se,s);
     for(it=se.begin();it!=se.end();it++)
         cout<<*it<<endl; 
     
     
 }
    
    
    
    
    
    return 0;
    
}