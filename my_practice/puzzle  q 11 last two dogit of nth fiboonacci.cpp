#include <iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    {
        return 1;
    }
    else
    return fib(n-1)+fib(n-2);
}
int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    int a,num,ans;
	    cin>>a;
	    num=fib(a%300);
	   
	    ans=num%100;
	    if(ans<=9)
	    {
	        cout<<"0"<<ans<<endl;
	    }
	    else 
	    cout<<ans<<endl;
	   
	}
	return 0;
}
