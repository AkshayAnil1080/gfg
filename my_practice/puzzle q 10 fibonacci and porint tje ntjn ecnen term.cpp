#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	 int n,i,t1=0,t2=1,nextterm;
	
	for(i-0;i<=n;i++)
	{
		cout<<t1<<endl;
		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;
	}
	return 0;
}
