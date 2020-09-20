#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int mss(int arr[],int n)
{
	int ans=0,sum=0;
	for(int i=0;i<n;i++)
	{
		if(sum+arr[i]>0)
		{
			
			cout<<arr[i];
			sum=sum+arr[i];
			
		}
		else
		{
			sum=0;
		}
		ans=max(ans,sum);
	}
	return ans;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<mss(arr,n);
	return 0;
}*/
int main()
{

        int n;cin>>n;
	    int arr[n],i,prod=0,j;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        prod=prod*arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<prod/arr[i]<<" ";
	    }
	    cout<<endl;
}
