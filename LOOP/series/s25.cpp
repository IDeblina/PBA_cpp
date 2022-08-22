#include<iostream>
using namespace std;
int main()
{
	int a= 5760,i;
	for(i=6; i>=1; i--){
		cout<<a<<" ";
		a=a/i;
	}
}