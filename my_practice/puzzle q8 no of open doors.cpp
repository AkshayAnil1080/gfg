#include <iostream>
#include<cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numoffactors(int n)
{
	int root=sqrt(n);
	if(root*root==n)
	return true;  // has odd no of factors
	
	else 
	return false;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int a,sum=0,i;
		cin>>a;
		while(i<=a)
		{
		
		if(numoffactors(i)==1)  // number having odd no of factors will be closed and which the perfect sqaure ie even no of factprs will be open
		{
			sum++;
		}
		i++;
	    }
	    	cout<<sum<<endl;

	}
	
	
	return 0;
}

// just print the sqrt of the number..

/*int fibo(int n)
{
    if((n==0)||(n==1))
    return n;
    else
    return fibo(n-1)+fibo(n-2);// 3*n and#*n-1 
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
	
	int n;
	cin>>n;
	
	cout<<fibo(3*n)<<endl;
}
	return 0;
}
*/



