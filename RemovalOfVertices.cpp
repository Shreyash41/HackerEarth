#include <bits/stdc++.h>
using namespace std;
int i,j;
typedef long long int ll;
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rrep(i,a,b)for(int i=a;i>=b;i--)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define f first
#define s second
#define mod 1000000007
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int test;
	cin>>test;
	while(test--)
	{
		ll n,k;
		cin>>n>>k;
 
		ll start_ind=(2+2*k)%n;
		if(start_ind==0)start_ind=n;
		ll power=n-pow(2,int(log2(n)));
		//cout<<power;
		if(power==0)
		{
			start_ind=(start_ind-1)%n;
		}
		else
			start_ind=(start_ind+(1+2*(power-1)))%n;
 
		if(start_ind==0)
		{
			cout<<n<<endl;
		}
		else cout<<start_ind<<endl;
 
 
	}
 
}
