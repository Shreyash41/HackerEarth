#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t = 1;
    while(t--)
    {
        long long int k;
        cin >> k;
        long long int a=1;
        long long int b=1;
        long long int c=0;
        long long int flag =0;

        while(flag == 0){
            c = a+b;
            if(c>k)
            {
                cout << c;
                flag =1;
            }
            a = b;
            b = c;
        }
    }
    return 0;
}
