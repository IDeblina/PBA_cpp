#include<iostream>
using namespace std;
main()
{
	int a,total;
	cout<<"enter cost";
	cin>>a;
	if(a<=2000)
	{
		total=(a*5)/100;
		cout<<"total bill"<<total;
	}
	else if(a>2000 && a<=5000){
		total=(a*25)/100;
		cout<<"total bill"<<total;
	}
	else if(a>5000 && a<=10000){
		total=(a*35)/100;
		cout<<"total bill"<<total;
	}
	else if(a>10000){
		total=(a*50)/100;
		cout<<"total bill"<<total;
	}
}