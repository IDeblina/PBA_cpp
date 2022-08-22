#include<iostream>
using namespace std;
main()
{
	int i,n,c=0;
	cout<<"Enter the no ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	cout<<"Prime";
	else
	cout<<"not prime";
	
}
/*
DRY RUN 
n= 5 
i=1 --- 5

i=1 if(n%i==0) c++ 
i=1 5%1==0 c=1
i=2 5%2==0 
i=3 5%3==0
i=4 5%4==0 
i=5 5%5==0 c++ c=2

*/
