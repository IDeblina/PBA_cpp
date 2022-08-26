#include<iostream>
using namespace std;
int main()
{
	int num,s=0,i,c=0,r,t;	
	cout<<"Enter the no";
	cin>>num;
	t=num;
	for(i=1;i<=num; i++){
		if(num%i==0){
			c++;
		}
	}
	if(c==2){
		while(num>0){
			r=num%10;
			s=s*10+r;
			num=num/10;
		}
	if(t==s)
	cout<<" prime Palindrome";
	}
	else
	cout<<"not prime palindrome";
}