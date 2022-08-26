#include<iostream>
using namespace std;
main()
{
	int num,i,mul;
	cout<<"enter a number ";
	cin>>num;
	for(i=1; i<=10; i++){
		mul= num*i;
		cout<<num<<" * "<<i<<" = "<<mul<<" \n";
	}
}