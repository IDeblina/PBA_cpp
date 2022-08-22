#include<iostream>
using namespace std;

//a=4 7 12 19
//b=3 5 7
// 2 2
int main()
{
	int a=4,i,b=3;
	for(i=1;i<=10; i++){
		cout<<a<<" ";
		a=a+b;
		b=b+2;
	}
}