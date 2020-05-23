#include<bits/stdc++.h>
using namespace std;
int main()
{
int q;
scanf("%d",&q);
while(q--)
{
int sum=0,num,i;
scanf("%d",&num);
for(i=1;i<num;i++)
{
if(num%i==0)
{
sum=sum+i;
}
}
printf("%d\n",sum);
}
return 0;
}
 
