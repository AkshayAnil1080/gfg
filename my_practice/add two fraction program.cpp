#include<iostream>
using namespace std;
void addFraction(int num1, int den1, int num2,int den2);
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,b,c,d,resultNum,resultDen;
		cin>>a>>b>>c>>d;
		addFraction(a,b,c,d);
	}
}


void addFraction(int num1, int den1, int num2,int den2)
{
    long long int gcd,num,den,i;
    num=num1*den2+num2*den1;
    den=den1*den2;
    long long int d=min(num,den);
    for(i=1;i<=d; i++)
    {
        if(num%i==0 && den%i==0)
        gcd=i;
    }

    cout<<num/gcd<<"/"<<den/gcd<<endl;
    
    }
