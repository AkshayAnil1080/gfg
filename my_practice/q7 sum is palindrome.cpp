#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int t;
	cin>>t;
	while(t--)
	{int n,rem=0,sum=0,temp,temp1,arev=0,arem;
		cin>>n;
		temp=n;
		while(n!=0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
		}
	temp1=sum;
		
		while(sum!=0)
		{
			arem=sum%10;
			arev=arev*10+arem;
			sum=sum/10;
		}
	
		if (arev==temp1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
