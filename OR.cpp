#include<bits/stdc++.h>
#define int long long
using namespace std;
int mx(int x){int ret=0;while(x)++ret,x>>=1;return ret;}
signed main(){
 
 
 int n,m;cin>>n>>m;
 int p=60;
 while(p>=0&&(n>>p&1ll)==(m>>p&1ll))--p;
 int ans=0;
 if(p>=0){
  m=(m&((1ll<<p)-1)),n=(n&((1ll<<p+1)-1));
  ans+=(1ll<<p)-n;
  int x=mx(m);
  ans+=(1ll<<x);
  n=max(n,1ll<<x);
  ans+=(1ll<<p)-n;
 }
 else ans=1;
 cout<<ans;
}
