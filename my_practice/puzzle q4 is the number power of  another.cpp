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


/*
Input:
2
2 8
1 3
Output:
1
0

tc =0.71sec


//another way  tc =0.01s
/*
#include <iostream>
#include<cmath>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while(t--)
	{
	   long long int a,b,z,r;
	    cin>>a>>b;
	    
	   z=log2(b)/log2(a);
	   r=pow(a,z);
	   if(r==b)
	   cout<<"1"<<endl;
	   else
	
	   cout<<"0"<<endl;
	}
	return 0;
}
*/
