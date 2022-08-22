#include<iostream>
using namespace std;
int main()
{
	int a,b,x,n;
	cout<<"Enter the no";
	cin>>n;
	a=x%10;//9
	b=x/10;//5
	if((a+b)+(a*b)==n)//(5+9)+(5*9)==59 //14+45==59
	cout<<"Special two digit";
	else
	cout<< "not special digit"; 
	
}