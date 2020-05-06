#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,i;
    cin>>t;
    while(t--){
        int count = 0;
        string arr;
        cin >> arr;
        for(i=0;arr[i];i++){
            if(arr[i] == 'A'||arr[i]=='a'||arr[i]=='E'||arr[i]=='e'||arr[i]=='I'||arr[i]=='i'||arr[i]=='O'||arr[i]=='o'||arr[i]=='U'||arr[i]=='u'){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
