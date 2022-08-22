#include<iostream>
using namespace std;
int main()
{
	double a=(0.5),b=(0.05),i;
	for(i=1; i<=10; i++){
		cout<<a<<" ";
		a=a+b;
		b=b*2;
	}
}