#include<iostream>
//#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int c1=0,n,m,c2=0,d;
	cout<<"Enter the nos. \n";
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		c1++;
	}
	for(int i=1;i<=m;i++)
	{
		if(m%i==0)
		c2++;
	}
	d=abs(n-m);
	if(d==2 && c1==2 && c2==2)
	cout<<"Twin prime";
	else
	cout<<"not twin prime";
}
