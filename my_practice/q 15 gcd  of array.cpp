#include<iostream>
using namespace std;

int gcd(int a, int b)
{
if (a == 0)
return b;
return gcd(b % a, a);
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,r;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        r=arr[0];
        for(i=1;i<n;i++)
        {
            r=gcd(r,arr[i]);
        }
        cout<<r<<endl;
        
    }
    
    
    return 0;
}

