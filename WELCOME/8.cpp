#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter the no";
	cin>>a>>b;//a=10 b=20 comment 
	a=a+b;//a=10+20=30
	b=a-b;//b=30-20=10
	a=a-b;//a=30-10=20
	cout<<"A="<<a<<" ";
	cout<<"B="<<b;
}