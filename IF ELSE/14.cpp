#include<iostream>
using namespace std;
main()
{
	int unit,bill;
	cout<<"enter the unit";
	cin>>unit;
	if(unit>0 && unit<=100){
		bill= unit*40;
		cout<<" total bill is "<<bill;
	}
	else if(unit>100 && unit<=300){
		bill = unit*50;
		cout<<" total bill is "<<bill;
	}
	else if(unit>300){
		bill = unit*60;
		cout<<" total bill is "<<bill;
	}
	
}