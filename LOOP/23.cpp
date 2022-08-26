#include<iostream>
using namespace std;
main()
{
	int n,r,s=0,rev=0,p;
	cout<<"Enter no\n";
	cin>>n;//107
	while(n>0)
	{
		r=n%10;
		if(r==0)
		p=r;
		else
		rev=rev*10+r;//0*10+7=7 7*10+1=71
		n=n/10;
	}
	while(rev>0)
	{
		r=rev%10;
		s=s*10+r;
		rev=rev/10;
	}
	cout<<"After removing zero"<<s<<"\n";
}
