#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,i,flag=1,sum=0;
	cin>>n;
	for(i=1;i<=n/2;i++)
	{
		sum=sum+i;
		if(sum==n)
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		cout<<"1";
	
	}
	else
	cout<<"0";
	return 0;
}
