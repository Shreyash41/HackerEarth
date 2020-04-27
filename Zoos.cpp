#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0,sount=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='z'){
            count++;
        }
        else{
            sount++;
        }
    }
    if((2*count)==sount){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
