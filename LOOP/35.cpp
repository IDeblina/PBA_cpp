#include<iostream>

using namespace std;

main()
{
	int n,p,r,s;
	cout<<"Enter the no\n";
	cin>>n;
	while(n>9)
	{
		p=n;
		s=0;
		while(p>0)
		{
			r=p%10;
			s=s+r;
			p=p/10;
		}
		n=s;
	}
	if(s==1)
	cout<<"Magic no";
	else
	cout<<"not magic no";
	
	
}
	

