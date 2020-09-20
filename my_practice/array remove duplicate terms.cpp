#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
int n;
cin>>n;
int arr[n],i,j;
for(i=0;i<n;i++)
{
	cin>>arr[i];
	
}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(arr[i]==arr[j])
		break;
	}
	if(i==j)
	{
		cout<<arr[i];
	}
}
	

	return 0;
}
