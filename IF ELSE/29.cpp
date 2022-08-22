#include<iostream>
using namespace std;
main()
{
	int bill,total;
	cout<<"enter your bill";
	cin>>bill;
	if(bill<=100)
	{
		total= (bill*1)+50;
		cout<<"your total bill is "<<total;
	}
	if(bill>100 && bill<=200)
	{
		total= (bill*2)+50;
		cout<<"your total bill is "<<total;
	}
	if(bill>200)
	{
		total= (bill*(5/2))+50;
		cout<<"your total bill is "<<total;
	}
}