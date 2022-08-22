#include<iostream>
using namespace std;
main()
{
	int a=6,b=5,i;
	for(i=1; i<=10; i++){
		cout<<a<<" ";
		a=a+b;
		b=b+5;
	}
}