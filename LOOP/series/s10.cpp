#include<iostream>
using namespace std;
main()
{
	int a=10,b=90,i;
	for(i=1; i<=10; i++){
		cout<<a<<" ";
		a=a+b;
		b=b+10;
	}
}