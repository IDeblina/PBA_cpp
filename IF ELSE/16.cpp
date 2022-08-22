#include<iostream>
using namespace std;
main()
{
	int a,b,c,total,subTotal;
	cout<<"enter the marks in physics \n";
	cin>>a;
	cout<<"enter the marks in chemistry \n";
	cin>>b;
	cout<<"enter the marks in math \n";
	cin>>c;
	total=a+b+c;
	subTotal=a+c;
	if((c>=60 && a>=50 && b>=40 && total>=200) || subTotal==150)
	{
		cout<<"eligible candidate";
	}
	else{
		cout<<"not eligible candidate";
	}
	
	
	
}