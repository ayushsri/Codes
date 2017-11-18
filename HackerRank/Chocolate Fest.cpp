#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;
   const int a=1001;
    ll max1[a][a];
    int mod=1000000007;
    void get(){
    for(int i=0;i<=1000;i++)
    {
        for(int j=max1[i][0]=1;j<=i;j++)
            max1[i][j]=(max1[i-1][j]%mod+max1[i-1][j-1]%mod)%mod;
    }
    
    }
    

int main() {
    get();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<max1[n+m][n]<<endl;
        
    }
    return 0;
}

