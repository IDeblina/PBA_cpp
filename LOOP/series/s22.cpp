#include<iostream>
using namespace std;
main()
{
	int num,i,j,c;
	for(j=1;j<=20;j++)
	{
	   c=0;
	for(i=1; i<=j; i++){
		if(j%i==0)
		c++;
	}
	if(c==2)
		cout<<j*j<<"\n";
}
}