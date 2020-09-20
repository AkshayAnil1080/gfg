#include <iostream>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--)
    {int count=0;
        int a,i;
        cin>>a;
        for(i=1;i*i<a;i++)
        {count++;
            
        }
        cout<<count;
        cout<<endl;
    }
	//code
	return 0;
}
