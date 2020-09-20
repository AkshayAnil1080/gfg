#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char** argv) {
	int n;
	cin>>n;
	int i,j,count,c2=0;
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			count++;}
		
	    }
		 if(count==3)
		 {
		  c2++;
		 }
		
	}
	cout<<c2;
	
	return 0;
}

/*
Input :
3
6
10
30
Output :
1
2
3
*/


// also number having exactly 3 divisor  is  square of prime number
int main()
{

int t;
	cin>>t;
	while(t--)
	{
	
	long long int n;
	cin>>n;
	long long int  i,flag,j,ans=0;
	for(i=2;i<=n;i++)
	{  flag=1;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
			flag=0;
			break;
		    }
		}
		if(flag==1)
		{
			if(i*i<=n)
			{
				ans++;
			}
		}
	}
	cout<<ans<<endl;
    }
    
    return 0;
}
