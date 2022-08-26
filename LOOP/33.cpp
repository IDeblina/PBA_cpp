#include<iostream>
using namespace std;
main()
{
	int num,t,mul=1,sum=0;
	cout<<"enter a number ";
	cin>>num;
	t=num;
	while(num>0){
		int r= num%10;
		mul=mul*r;
		sum=sum+r;
		num=num/10;
	}
	if(mul*sum==t){
		cout<<"special number";
	}
	else{
		cout<<"not special number";
	}
	
}