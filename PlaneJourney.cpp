#include <bits/stdc++.h>
using namespace std;
int i,j;
typedef long long int ll;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define f first
#define s second
#define mod 1000000007
bool compare(ll x,ll y)
{
    return x>y;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        ll n,m;
        cin>>n>>m;
        ll src[n],fl[m];
        rep(i,0,n)cin>>src[i];
        rep(i,0,m)cin>>fl[i];
        sort(src,src+n,compare);
        sort(fl,fl+m,compare);
        if(src[0]>fl[0])
        {
            cout<<-1<<endl;
            return 0;
        }
        ll ans[m]={},i=0,j=0;
        while(i<n)
        {
            if(src[i]<=fl[j])
            {
                i++;
                ans[j]++;
                j++;
                if(j==m)
                {
                    j=0;
                }
                
            }
            else
            {
                j--;
            }
        }
    cout<<2*(*max_element(ans,ans+m))-1;
 
}
