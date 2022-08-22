#include<iostream>
using namespace std;
main()
{
	int a=120,b=21,i;
	for(i=10; i>=1; i--){
		cout<<a<<" ";
		a=a-b;
		b=b-2;
	}
}