#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,m,k,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    for(i=0;i<n;i++){
        if(arr[i]==k){
            count = i;
        }
    }
    cout<<count;
    return 0;
}
