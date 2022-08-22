#include<iostream>
using namespace std;
main()
{
	int a=22,b=2,i;
	for(i=1; i<=10; i++){
		cout<<a<<" ";
		a=a+b;
		b=b*2;
	}
}