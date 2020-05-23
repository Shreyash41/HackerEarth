#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false);
#define ull unsigned long long int
#define ll long long int 
#define F(i,a,b) for(int i=(int)a;i<(int)b;i++)
 
bool sortcol(const vector<int>&v1,const vector<int> &v2){
  return v1[1]<v2[1];
}
bool sortz(const vector<int>&v1,const vector<int> &v2){
  return v1[3]<v2[3];
}
 
 
int main(){
FASTIO;
  int n,k;
  cin>>n>>k;
  vector<vector<int>> arr(n,vector<int>(5));
  F(i,0,n){
      cin>>arr[i][0];
   arr[i][3]=i;
    }
    F(i,0,n){
      cin>>arr[i][1];
    }
    F(i,0,n){
      cin>>arr[i][2];
    }
 
    sort(arr.begin(),arr.end(),sortcol);
   
    int arrz[k]={0};
 
if(k>=n){
 F(i,0,n){
 
   arr[i][4]=arr[i][0];
 }
}
else{
    F(i,0,n){
   sort(arrz,arrz+k);
   if(arrz[0]<=arr[i][0]){
    arrz[0]=arr[i][0]+arr[i][1];
     arr[i][4]=arr[i][0];
   }
   else{
   
     arr[i][4]=arrz[0];
    arrz[0]=arrz[0]+arr[i][1];
   }
    }
  
}
  
  sort(arr.begin(),arr.end(),sortz);
  F(i,0,n){
   cout<<arr[i][4]<<" ";
  }
 
}
