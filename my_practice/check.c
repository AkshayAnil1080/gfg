#include <stdio.h>

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int num,temp,sum=0;
scanf("%d",&num);
temp=num;
while(num!=0)
{
sum=sum+(num%10)*(num%10)*(num%10);
num=num/10;
}
if(sum==temp)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
