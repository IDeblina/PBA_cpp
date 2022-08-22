#include<iostream>
using namespace std;
main()
{
	int a=5,b=1,i;
	for(i=1; i<=10; i++){
		cout<<a<<" ";
		a=a+b;
		b=b*i;
	}
}