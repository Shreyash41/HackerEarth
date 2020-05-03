#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,i;
    long long int k,res,arr[100000];
    cin >> t;
    while(t--){
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    res = arr[0];
    for(i = 1;i<n;i++){
        if(arr[i] < res){
            res = arr[i];
        }
    }
    if(res>=k){
        cout<<"0"<<endl;
    }
    else
    {
        cout<<(k-res)<<endl;
    }
  }
  return 0;
}
