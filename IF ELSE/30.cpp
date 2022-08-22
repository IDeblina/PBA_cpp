#include<iostream>
using namespace std;
main()
{
	int Weight,cost;
	cout<<"enter the Weight of the percel \n";
	cin>>Weight;
	if(Weight<=10)
	{
		cost=Weight*20;
		cout<<"total cost is "<<cost;
	}
	if(Weight>10 && Weight<=30)
	{
		cost=Weight*10;
		cout<<"total cost is "<<cost;
	}
	if(Weight>30 && Weight<=50)
	{
		cost=Weight*8;
		cout<<"total cost is "<<cost;
	}
	if(Weight>50)
	{
		cost=Weight*5;
		cout<<"total cost is "<<cost;
	}
}