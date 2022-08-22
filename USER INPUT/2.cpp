#include<iostream>
#include<math.h>
using namespace std;
main()
{
	//. Write a program to find the area and circumference of a circle ring, whose outer and inner ra

	int r1,r2,a,c;
	cout << "enter two radii";
	cin>>r1>>r2;
	c=2*(3.14)*r1;
	a=(3.14)*(r1*r1-r2*r2);
	cout<<"area of the ring is "<<a <<"\n";
	cout<< "Circumference of the ring is "<<c;
}