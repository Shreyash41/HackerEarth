#include <bits/stdc++.h> 
using namespace std; 
  

int maxIncSubarr(long long int a[], int n) 
{ 
    
    int pre[n] = { 0 }; 
    int pos[n] = { 0 }; 
    pre[0] = 1; 
    pos[n - 1] = 1; 
    int l = 0; 
  
    
    for (int i = 1; i < n; i++) { 
        if (a[i] > a[i - 1]) 
            pre[i] = pre[i - 1] + 1; 
        else
            pre[i] = 1; 
    } 
  
    
    l = 1; 
    for (int i = n - 2; i >= 0; i--) { 
        if (a[i] < a[i + 1]) 
            pos[i] = pos[i + 1] + 1; 
        else
            pos[i] = 1; 
    } 
  
    
    int ans = 0; 
    l = 1; 
    for (int i = 1; i < n; i++) { 
        if (a[i] > a[i - 1]) 
            l++; 
        else
            l = 1; 
        ans = max(ans, l); 
    } 
  
    
    for (int i = 1; i <= n - 2; i++) { 
        if (a[i - 1] < a[i + 1]) 
            ans = max(pre[i - 1] + pos[i + 1], ans); 
    } 
  
    return ans; 
} 
  

int main() 
{  
    int n;
    cin>>n;
    long long int arr[n]; 
    for(int i = 0;i<n;i++)
    {
     cin>>arr[i];   
    }
    cout << maxIncSubarr(arr, n); 
  
    return 0; 
} 
