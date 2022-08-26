#include<iostream>
using namespace std;
main()
{
	int num,s=1,r,t,i;
	cout<<"enter a number";
	cin>>num;
	int c=0,c1=0;
	for(i=1; i<=num; i++){
		if(num%i==0){
			c++;
		}
	}
	if(c==2){
		t=num;
		while(t>0){
			r=t%10;
			s=s*10+r;
			t=t/10;
		}
		for(i=1; i<=s; i++){
		if(s%i==0){
			c1++;
		}
	}
	if(c1==2){
		cout<<num<<" is Twisted prime number";
	}
	else{
		cout<<num<<" is not Twisted prime number";
	}
	}
	
}