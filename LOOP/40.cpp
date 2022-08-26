#include<iostream>
using namespace std;

main()
{
	int n,k=0;
	cout<<"Enter the no\n";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(i*(i+1)==n)
		{
		k=1;
	    }
	}
	if(k==1)
	cout<<"Pronic Number or Heteromecic Number";
	else
	cout<<"not Pronic Number or Heteromecic Number";
}
