#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll arr =1000;
ll dp[arr+1][arr+1];
ll mod=1000000000;
void dyn_prog()
{
    for(ll i=0;i<=arr;i++)
    {
        for(ll j=dp[i][0]=1;j<=i;j++)
            dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
        
    }
}
int main()
{ dyn_prog();
    ll t;
  cin>>t;
  while(t--)
  {
      ll n;
      cin>>n;
      cout<<1<<" ";
      for(ll i=1;i<=n;i++)
          cout<<dp[n][i]<<" ";
      cout<<endl;
      
  }
    
    
    
    
    return 0;
}