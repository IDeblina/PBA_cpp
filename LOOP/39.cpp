#include<iostream>
using namespace std;

main()
{
	int n,s=0,l;
	cout<<"Enter the no\n";
	cin>>n;
	l=n%10;
	while(n>9)
	{
		n=n/10;
	}
	s=l+n;
	cout<<"sum="<<s;
	
}
