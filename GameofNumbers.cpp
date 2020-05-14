#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        int flag = 0;
        int k;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                k=j;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            flag = 0;
            for(int l=k+1;l<n;l++){
                if(arr[k]>arr[l]){
                    cout<<arr[l]<<" ";
                    flag = 1;
                    break;
                }
            }
        }
            if(flag == 0){
                cout<<-1<<" ";
            }
    }
}



















