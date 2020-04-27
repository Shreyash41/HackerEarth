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
	int test;
	cin >> test;										
    while(test--)
    {
        int n;
        cin>>n;
        int preb[n]={},sufa[n]={},ca=0,cb=0,ans=INT_MAX;
 
        string str;
        char last;
        cin>>str;
        rep(i,0,n)
        {
            if(str[i]=='B')
            {
                cb++;
            }
            preb[i]=cb;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(str[i]=='A')
            {
                ca++;
            }
            sufa[i]=ca;
        }
       rep(i,0,n)
       {
           int val;
           if(i+1>=n)
           {
               val=preb[i-1];
           }
           else if(i-1<0)
           {
               val=sufa[i+1];
           }
           else val=preb[i-1]+sufa[i+1];
 
           ans=min(val,ans);
 
       }
        if(n!=1)
        cout<<ans<<endl;
        else cout<<0<<endl
    }
 
 
}
