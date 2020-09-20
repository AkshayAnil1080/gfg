#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,gcd=0,i;
        cin>>a>>b;
        c=min(a,b);
        
        for(i=1;i<=c;i++)
        {
            if(a%i==0 && b%i==0)
            gcd=i;
            
        }
        cout<<gcd;
    }

	return 0;
}
