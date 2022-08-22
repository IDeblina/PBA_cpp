#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter three numbers \n";
	cin>>a>>b>>c;
	if(a>b && a>c){
		cout<<a<<" is greatest";	
	}
	else if(b>c && b>a){
		cout<<b<<" is greatest";	
	}
	if(c>b && c>a){
		cout<<c<<" is greatest";	
	}
	else if(a==b && b==c){
		cout<<"all numbers are equal";
	}
}