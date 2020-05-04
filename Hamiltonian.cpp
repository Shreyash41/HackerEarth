#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        long long int count=0;
        for(j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                count++;
            }
            else
            {
                break;
            }
        }
        if(count == (n-i-1)){
            cout<<arr[i]<<"\n";
        }
    }
    cout<<arr[n-1];
return 0; 
}
