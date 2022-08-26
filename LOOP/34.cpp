#include<iostream>
using namespace std;
main()
{
	int num,mul=1;
	cout<<"enter a number ";
	cin>>num;
	while(num>0){
		int r= num%10;
		mul=mul*r;
		num=num/10;
	}
	cout<<mul;
	
}