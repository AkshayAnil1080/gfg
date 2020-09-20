#include <stdio.h>
#inlcude<math.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int num,temp,sum=0,rem;
scanf("%d",&num);
temp=num;
while(num!=0)
{rem=num/10;
sum=sum+(pow(rem,3));
num=num/10;
}
cout<>sum;
if(sum==temp)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
