#include<iostream>
using namespace std;
main()
{
	int r,ang,area;
	cout<<"enter radius";
	cin>>r;
	cout<<"enter angle";
	cin>>ang;
	area= ((3.14)*(r*r)*ang)/360;
	cout<< "area of a sector of a circle is "<<area;
	
}