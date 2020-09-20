#include <iostream>
#include<cmath>
using namespace std;
void arm(int n)
{ int temp=n;
	int res=0,rem;
	while(n>0)
	{
		rem=n%10;
		res=res+(pow(rem,3));
		n=n/10;
	}
	if(res==temp)
	{
		cout<<"yes";
	}
	else
	{cout<<"no";
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t,a;
	cin>>t;
	arm(t);
	return 0;
}
