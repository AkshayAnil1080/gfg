#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	// sum of two num using pointers
	/*
	int a,b;
	cin>>a>>b;
	int *p,*q;
	p=&a;
	q=&b;
	//int *p=a; int *q=b;  will not work like it does in array
	cout<<*p+*q;
	*/
	
///*	
	int a[3];
	int i;
	a[0]=2 ;a[1]=3; a[2]=4;
	//int *p=a;
	for(i=0;i<3;i++)
	{
		cout<<&a[i]<<"\n"; // address
		cout<<a[i]<<"\n"; //print the value
		cout<<*(a+i)<<endl;   // value
		cout<<(a+i)<<endl;   // adderss
	}
	
	//*/
	return 0;
}
