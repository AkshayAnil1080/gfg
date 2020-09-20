#include <iostream>
#include<cmath>
using namespace std;

int main() {
	//code
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
      
        int AC=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        int BD=sqrt(pow((x4-x3),2)+pow((y4-y3),2));
        int AB=sqrt(pow((x4-x1),2)+pow((y4-y1),2));
        int CD=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
        
        
        if(AB==CD && AC==BD && AB!=0)
        {
            cout<<"Yes"<<endl;
            
        }
        
        else
        {
            cout<<"No"<<endl;
        }
    }
}
return 0;
}




/*
Input:
1
20 10 10 20 20 20 10 10
Output:
Yes



*?
