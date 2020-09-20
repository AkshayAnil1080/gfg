#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
	
	int n;
	cin>>n;
	int i,flag,j;
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
		cout<<i<<" ";
	}
	cout<<endl;
    }
	return 0;
}

/*2
10
35
Output:
2 3 5 7
2 3 5 7 11 13 17 19 23 29 31 
*/

