#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a=0,b=0,c=1,d;
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t";
	for(int i=1;i<=5;i++)
	{
		d=a+b+c;
		cout<<d<<"\t";
		a=b;
		b=c;
		c=d;
	
	}

}

