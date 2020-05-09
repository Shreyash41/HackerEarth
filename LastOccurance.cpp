#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,m,count = -1;
    cin>>n>>m;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==m){
            count = i;
        }
    }
    cout<<count+1;
    return 0;
}
