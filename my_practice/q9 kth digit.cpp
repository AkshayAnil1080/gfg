#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d,i,rem=0;
        cin>>a>>b>>c;
        d=pow(a,b);
        for(i=0;i<c;i++)
        {
            rem=d%10;
            d=d/10;
        }
    
        cout<<rem<<endl;
        
    }
	

     

	return 0;
}
