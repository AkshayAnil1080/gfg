#include <iostream>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,num,ivar,count=0;
	cin>>num;
	for(i=1;i<num;i++)
	{
		float fvar=sqrt((double)i);
		ivar=fvar;
		if(ivar==fvar)
		{
			count++;
		}
		
		else
		continue;
		
    }
    cout<<count;
	return 0;
}
