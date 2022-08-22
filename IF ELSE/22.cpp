#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double a=sin(30),b=cos(30),c=tan(30);
	if(a<b && a<c){
		cout<<a<<" is the smallest";
	}
	else if(b<a && b<c){
		cout<<b<<" is the smallest";
	}
	else if(c<a && c<b){
		cout<<c<<" is the smallest";
	}
	
}