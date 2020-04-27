#include <bits/stdc++.h>
using namespace std;
int i,j;
typedef long long int ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define f first
#define s second
#define mod 1000000007
map<ll,vector<ll>>store;
ll get_freq(ll element,ll l,ll r)
{
    ll a=lower_bound(store[element].begin(),store[element].end(),l)-store[element].begin();
    ll b=upper_bound(store[element].begin(),store[element].end(),r)-store[element].begin();
    return b-a;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,m,q;
    cin>>n>>m;
    ll freq[m];
    rep(i,0,n)
    {
        ll num;
        cin>>num;
        store[num].pb(i+1);
    }
    rep(i,0,m)
    {
        cin>>freq[i];
    }
    cin>>q;
    while(q--)
    {
        ll l,r,flag=1;
        cin>>l>>r;
        rep(i,0,m)
        {
            //cout<<i<<" ";
            if(store.count(i+1))
            {
          
                if(freq[i]!=get_freq(i+1,l,r))
                {
                    if(get_freq(i+1,l,r)!=0)
                    {flag=0;
                    //break;
                    }
                }
            }
        }
        if(flag==1)cout<<1<<endl;
        else cout<<0<<endl;
 
    }
 return 0;
}

// PARTIALLY ACCEPTED
