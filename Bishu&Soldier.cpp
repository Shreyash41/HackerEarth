#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,i;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int power,q;
    cin>>t;
    while(t--){
        int sum=0;
        int count = 0;
        cin>>power;
        for(i=0;i<n;i++){
            if(arr[i] <= power){
                count++;
                sum += arr[i];
            }
        }
        cout<<count<<" "<<sum;
    }
    return 0;
}
