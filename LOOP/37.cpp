#include<iostream>
using namespace std;

main()
{
	int n,c=0;
	cout<<"Enter the no\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		cout<<i<<"\t";
		c++;
	    }
	}
	cout<<"No of factors="<<c;
	
}
