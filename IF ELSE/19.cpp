#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three sides";
	cin>>a>>b>>c;
	if(a==b && a==c)
	cout <<"Equilateral Triangle";
	else if(a==b || b==c || c==a)
	cout<<"Isosceles Triangle";
	else if(a!=b && b!=c)
	cout<<"Scalene Triangle";
}