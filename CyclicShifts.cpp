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
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int sol;
	cin >> sol;										
    while(sol--)
    {
        int n,m,arr[16]={0},ans[16]={};
        char c;
        int f=0;
        cin>>n>>m>>c;
 
        rep(i,0,16)
        {
            arr[i]=(n&1);
            n=n>>1;
            //cout<<arr[i]<<" ";
        }
        
        for(int i=0;i<16;i++)
        {
            if(c=='L')
            ans[(i+m)%16]=arr[i];
            else if(c='R')
            ans[(i-m+16)%16]=arr[i];
        }
        rep(i,0,16)
        {
            //cout<<ans[i]<<" ";
            f+=ans[i]*pow(2,i);
        }
        cout<<f<<endl;
    }
 
}
