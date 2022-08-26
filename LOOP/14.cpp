#include<iostream>
//#include<conio.h>

using namespace std;

int main()
{
	int a,b,p,l,h;
	cout<<"Enter two no\n";
	cin>>a>>b;
	p=a*b;
	for(int i=1;i<=p;i++)   /* Because the nos goes from 0 to p */
	{
		if(a%i==0 && b%i==0)//a=10 b=15
		h=i;
	}
	l=p/h;
	cout<<"H.C.F="<<h<<"\t";
	cout<<"L.C.M="<<l<<"\t";	
	
}

/*
DRY RUN
a=10
b=15
p=150
for i=1 1<150 true 
 if ( 10%1=0 15%1=0) true 
 h=1
 
 for i=2 2<150 true 
 if ( 10%2==0 15%2 !=0) false
 
 */