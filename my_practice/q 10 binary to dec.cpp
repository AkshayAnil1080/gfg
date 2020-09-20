#include <iostream>
using namespace std;

int main() {
	//code
	 int t;
    cin>>t;
    while(t--)
    {long long int n,rem,dec=0,base=1;
        cin>>n;
        while(n>0)
        {
            rem=n%10;
            dec=dec+rem*base;
            n=n/10;
            base=base*2;
        }
        cout<<dec<<endl;
    }
	return 0;
}
