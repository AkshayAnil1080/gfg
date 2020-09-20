#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long fact(int n)
{
	if(n>=1)
	{
		return n*fact(n-1);
	
	}
	else 
	return 1;
}
int main(int argc, char** argv) {
	
	int n;
	cin>>n;
	cout<<fact(n);
	
	return 0;
}
