#include <iostream>
using namespace std;

using namespace std;
long long int gcd(long long int n1,long long int n2)
{
    if(n1==0)
    return n2;
    else
    return gcd(n2%n1,n1);
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,lcm;
        cin>>a>>b;
        c=gcd(a,b);
       lcm=(a*b)/c;
		        
        
        cout<<lcm<<" "<<c;
        cout<<endl;
      
    }

	return 0;
}
