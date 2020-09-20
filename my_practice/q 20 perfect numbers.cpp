#include <iostream>
using namespace std;
int sum(int n)
{ 
    int i,sum=0;
    for(i=1;i<n;i++)
    {if(n%i==0)
    {sum=sum+i;}
    }
    if(sum==n)
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int a;
        cin>>a;
        sum(a);
    }
	//code
	return 0;
}
