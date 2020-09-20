#include <iostream>
using namespace std;

int main() {
	//code
			int t;cin>>t;
	while(t--)
	{
	   int n,i,j,count;
	    cin>>n;
	     int arr[n];
	    
	    for(i=0;i<n-1;i++)
	    {
	     cin>>arr[i];   
	    }
	    for(i=1;i<=n;i++)
	    {
	        count=0;
	        for(j=0;j<n-1;j++)
	        {
	            if(i==arr[j])
	            count++;
	        }
	          if(count==0)
	          cout<<i<<" ";
	    }
	  
	    cout<<endl;

         }
	return 0;
}
