#include<iostream>
using namespace std;
main()
{
	int num,sum=0;
	cout<<"enter a number ";
	cin>>num;
	int t=num;
	while(num>0){
		int r=num%10;
		sum=sum+r;
		num=num/10;
	}
	if(t%sum==0){
		cout<<t<<" is a Harshad Number"	;
	}
	else{
		cout<<t<<" is not a Harshad Number"	;
	}
	
}