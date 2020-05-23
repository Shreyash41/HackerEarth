#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ull unsigned long long int
#define ll long long int
#define F(i,a,b) for(int i-(int a)a;i<(int)b;i++)
 
int main(){
 
	int t;
	cin>>t;
	while(t--){
		ull n,k;
		cin>>n>>k;
		ull sum=0;
		ull terms=n;
		while(terms!=0){
			sum = sum+(terms*(terms+1)/2);
			terms=terms/k;
			sum-=(k*(terms*(terms+1)/2));
		}
		cout<<sum<<"\n";
	}
	return 0;
}
