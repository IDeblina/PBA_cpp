#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c;
	cout<<a<<"\t"<<b<<"\t";
	for(int i=1;i<=5;i++)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}
	
}
