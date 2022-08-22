#include<iostream>
//#include<conio.h>
using namespace std;

int main()
{
	int s=0,r,n;	
	cout<<"Enter the no \n";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
		
	}
	cout<<s;
	//getch();
	
}
/*
DRY RUN
n=123
while(123>0)
r=123%10=3
s=0+3=3
n=123/10=12

while(12>0)
r=12%10=2
s=3+2=5
n=12/10=1

while(1>0)
r=1%10=1
s=5+1=6
n=1/10=0

while(0>0) condition false loop terminate s=6 print
*/