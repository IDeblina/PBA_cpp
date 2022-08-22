#include<iostream>
//#include<conio.h>
using namespace std;

int main()
{
	int s=0,r,n,t;	
	cout<<"Enter the no";
	cin>>n;
	t=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(t==s)
	cout<<"Palindrome";
	else
	cout<<"not palindrome";
}
/*
DRY RUN
n=121
t=121
while(121>0)
r=121%10=1
s=0*10+1=1
n=121/10=12

while(12>0)
r=12%10=2
s=1*10+2=12
n=12/10=1

while(1>0)
r=1%10=1
s=12*10+1=121
n=1/10=0

while(0>0) false 

if(121==121) true  palindrome
*/
