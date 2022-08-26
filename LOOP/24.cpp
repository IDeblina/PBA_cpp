#include<iostream>
using namespace std;
main()
{
	int n,r,c=0,rev=0,p;
	cout<<"Enter no\n";
	cin>>n;//107
	while(n>0)
	{
		r=n%10;
		if(r==0)
		c++;
		else
		rev=r;
		n=n/10;
	}
	if(c>0)
	cout<<"Duck no\n";
	else
	cout<<"Not duck no\n";

}
