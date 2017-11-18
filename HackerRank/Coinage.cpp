#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int dp[1001];
int main() {
    int t;
    cin>>t;
    while(t--)
    {int N,A,B,C,D;
    ll ans=0;
     cin>>N>>A>>B>>C>>D;
     for (int i = 0; i <= N; i++)
     dp[i] = 0;
     for(int b=0;b<=B&&2*b<=N;b++)
       for(int a=0;a<=A&&a+2*b<=N;a++)
           dp[a+2*b]++;
           
      for(int c=0;c<=C&&5*c<=N;c++)
       for(int d=0;d<=D&&10*d+5*c<=N;d++)
          ans+= dp[N-5*c-10*d];
    
    cout<<ans<<endl;
    }
    
    return 0;
}