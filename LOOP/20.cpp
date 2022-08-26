#include<iostream>
using namespace std;
main()
{
	int num,r,s=0;
	cout<<"enter a number";
	cin>>num;
	while(num>0){
		r=num%10;
		s=s*10+r;
		num=num/10;
	}
	cout<<s;
	
}