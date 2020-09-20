#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,a,count=0;
	    cin>>a;
	    for(i=1;i*i*i<=a;i++)
	    {
	        for(j=0;j*j*j<=a;j++)
	        {
	            if(i*i*i+j*j*j==a)
	            count++;
	        }
	    }
	    cout<<count<<endl;;
	}
	return 0;
}
