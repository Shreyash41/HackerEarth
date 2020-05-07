#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n,i,j,t,count;
    cin>>t;
    while(t--){
        cin>>n;
        count =0;
        char arr[n][n];
        for(i = 0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(arr[i][j]==arr[n-i-1][j]){
                    count++;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(arr[i][j]==arr[i][n-j-1]){
                    count++;
                }
            }
        }
        if(count==(2*n*n)){
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
        
    }
return 0;
}
