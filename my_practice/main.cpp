#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int t,a,res=0,rem,b;
	cin>>t;
	while(t--)
	{cin>>a;
	b=a;
	while(a>0)
	{
	    rem=a%10;
	    res=res+(pow(rem,3));
	    a=a/10;
	}
	
	if(res==b)
	    cout<<"Yes";
	else
	    cout<<"NO";
	    res=0;
	}
	return 0;
}

