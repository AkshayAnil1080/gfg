#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,i,j,flag;
	cin>>n;
		for(i=2;i<n;i++)
	{  flag=1;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
			flag=0;
			break;
		    }
		}
		if(flag==1)
		{if(i*j<=n )
		cout<<i<<" "<<j<<endl;
		
		}
	}
	return 0;
}
