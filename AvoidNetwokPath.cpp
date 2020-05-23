#include<bits/stdc++.h>
using namespace std;
 
// void input()
// { 
//     #ifndef ONLINE_JUDGE 
//     freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
//     #endif
// }
#define endl "\n"
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define pll pair<ll,ll>
#define mp make_pair
#define ff first
#define ss second
#define tll tuple<ll,ll,ll>
#define mt make_tuple
#define INF LONG_LONG_MAX
#define mod 1000000007
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define cases ll t; cin>>t; while(t--)
#define array(a,n) ll a[n]; rep(i,0,n) cin>>a[i];
#define vector(a,n) vll a(n); rep(i,0,n) cin>>a[i];
#define sortall(a) sort(a.begin(),a.end())
#define printall(a,n) rep(i,0,n) cout<<a[i]<<" "; cout<<endl;
 
// --------------- My Template End --------------- //
int k=0;
ll x=212072634227239451;
map<string,int>m;
ll find_path(ll path[][1000],ll prod,ll i,ll j)
{
    string key=to_string(i)+"."+to_string(j);
    prod=(prod%x*path[i][j]%x)%x;
    prod%=x;
    if(m.count(key))return m[key];
    //cout<<prod<<" "<<i<<" "<<j<<endl;
    ll count=0;
    if(prod%x==0||path[i][j]%x==0){return m[key]=0;}
    if(i==0&&j==0)
       {   
        //cout<<k++<<endl;
        return 1;
       }
    if(i==0)
       {
        count+=find_path(path,prod,i,j-1);
       }
    else if(j==0)
        {
        count+=find_path(path,prod,i-1,j);
       }
    else
    {
        count+=find_path(path,prod,i-1,j)+find_path(path,prod,i,j-1);
    }
    return m[key]=count;
}
 
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    //input();
    ll n,m;
    cin>>n>>m;
    ll path[n][1000]={};
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cin>>path[i][j];
        }
    }
 
    cout<<find_path(path,1,n-1,m-1);
    
}
Language: C++14
