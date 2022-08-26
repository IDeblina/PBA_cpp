#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int n,s=0,f,t,r;
	cout<<"Enter the no\n";
	cin>>n;
	t=n;
	while(n>0)
	{
		r=n%10;
		f=1;
		for(int i=1;i<=r;i++)
		{
			f=f*i;
		}
		s=s+f;
		n=n/10;
		
	}
	if(s==t)
	cout<<"Special no";
	else
	cout<<"Not special no\n";
}
