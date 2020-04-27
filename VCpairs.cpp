#include<iostream>
#include<string>
using namespace std;

bool isvowel(char ch)
{
 if(ch == 'a' || ch == 'e' || ch == 'i'||ch=='o'||ch=='u')
     return 1;
 else
     return 0;
}

int main()
{
 int T;
 string str;
 cin >> T;
 while(T--)
   {
       int N,count = 0;
       cin >> N;
       cin >> str;
       for(int i = 0;i < str.length();++i)
            if(!isvowel(str[i]) && isvowel(str[i+1]))
               count++;
    cout<<count<<endl;           
   }
   return 0;
}
