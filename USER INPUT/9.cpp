#include<iostream>
#include<math.h>
using namespace std;
main(){
	int s;
	double area, a;
	cout<< "enter length of side" << "\n";
	cin>>s;
	a=sqrt(3);
	area= (s*s*a)/4;
	cout<< "area of the Equilater Triangle is "<<area;
}