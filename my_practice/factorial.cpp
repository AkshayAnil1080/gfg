#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int a,i;
        long long int fact=1;
        cin>>a;
       
        
        for(i=2;i<=a;i++)
        {
            fact=fact*(long long)i;
        }cout<<fact<<endl;
    }
	//code
	return 0;
}

