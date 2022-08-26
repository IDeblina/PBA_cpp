#include<iostream>
using namespace std;
main()
{
	int num,t,r,s=0;
	cout<<"enter a number";
	cin>>num;
	t=num*num;
	while(t>0){
		r=t%10;
		s=s+r;
		t=t/10;
	}
	if(s==num){
		cout<<num<<" is neon number";
	}
	else{
			cout<<num<<" is not neon number";
	}
}