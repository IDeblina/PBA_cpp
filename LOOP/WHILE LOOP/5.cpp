#include<iostream>
using namespace std;

int main()
{
	int s=0,r,n,t;	
	cout<<"Enter the no \n";
	cin>>n;
	t=n;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(t==s){
		cout<<t<<" is armstrong number";
	}
	else{
		cout<<t<<" is not armstrong number";
	}
}

/*
DRY RUN
n=153
t=153
while(153>0)
r=153%10=3
s=0+(3*3*3)=27
n=153/10=15

while(15>0)
r=15%10=5
s=27+(5*5*5)=125+27=152
n=15/10=1

while(1>0)
r=1%10=1
s=152+(1*1*1)=152+1=153
n=1/10=0

while(0>0) false

if(153==153) true  armstrong number
*/



		


