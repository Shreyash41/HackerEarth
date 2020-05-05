#include<bits/stdc++.h>
using namespace std;
long long int n,m,i,j;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;
    long long int max[100001];
    long long int arr[m][n];

    for(i = 0;i<m;i++){
        for(j = 0;j<n;j++)
            cin>>arr[i][j];
    }
    for(i=0;i<m;i++){
        max[i] = arr[i][j];
        for(j=0;j<n;j++){
            if(arr[i][j] > max[i])
                max[i] = arr[i][j];
        }
    }
    for(i=0;i<m;i++)
        cout<<max[i]<<" ";

    return 0;
}
