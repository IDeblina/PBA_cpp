#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter the no";
	cin>>a>>b;//a=10 b=20 comment 
	c=a;//c=10
	a=b;//a=20
	b=c;//b=10
	cout<<"A="<<a<<" ";
	cout<<"B="<<b;
}