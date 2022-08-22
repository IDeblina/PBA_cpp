#include<iostream>
using namespace std;
main()
{
	int num,i,c,j;
	for(j=1;j<=20;j++)
	{
		c=0;
	for(i=1; i<=j; i++){
		if(j%i==0)
		c++;
	}
	if(c==2)
		cout<<j<<"\t";
}
}
/*
j=1  i=1 

*/
