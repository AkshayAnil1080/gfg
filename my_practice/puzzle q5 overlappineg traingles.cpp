#include <iostream>
#include<cmath>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while(t--)
	{
	    int a,b,i,flag=1;
	    cin>>a>>b;
	    
	    for(i=0;i*a<=b;i++)
	    {
	        
	        if(pow(a,i)==b)
	        {flag=0;}
	        
	    }
	    if(flag==0)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    cout<<"0"<<endl;
	}
	
	return 0;
}



