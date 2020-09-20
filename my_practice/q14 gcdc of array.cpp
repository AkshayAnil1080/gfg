#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[10],n,gcd,i,j,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	m=arr[0];
	for(i=0;i<n;i++)
	{
	  if(arr[i]<m)
	  {
	  	m=arr[i];
	  }

	}
	cout<<m<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(arr[i]%j==0)
			gcd=j;
		}
	}
	cout<<gcd;
	
	return 0;
}
