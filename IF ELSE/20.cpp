#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a,b,c,d,s,R1,R2;
	cout<<"enter input";
	cin>>a>>b;
	d=(b*b)-(4*a*c);
	s=sqrt(d);
	
	if(d>=0){
		R1=(-b+s)/2*a;
		R2=(-b-s)/2*a;
		cout<<R1;
		cout<<R2;
	}
	else 
	{
		cout<<"roots are imaginary";
	}
		
}