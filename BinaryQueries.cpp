#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,q;
    int value,x,l,r;
    cin>>n>>q;
    int arr[n];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    while(q--)
    {
        cin>>value;
        if(value==1)
        {
            cin>>x;
            if(arr[x]==0)
                arr[x]=1;
            else
                arr[x]=0;    
        }
        else if(value == 0)
        { 
            //value==0
            cin>>l>>r;
            if(arr[r]==1)
                cout<<"ODD";
            else
                cout<<"EVEN";
        }
    }
return 0;                    
}
