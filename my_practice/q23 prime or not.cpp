#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,flag=1;
        cin>>n;
        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return(0);
}
