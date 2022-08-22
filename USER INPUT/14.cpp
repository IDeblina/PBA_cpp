#include<iostream>
#include<math.h>
using namespace std;
main(){
	int baseLength, slantHeight, height;
	int baseArea, surfaceArea, volume;
	cin>>baseLength;
	cout<< "enter slantHeight \n ";
	cin>>slantHeight;
	cout<< "enter height \n";
	cin>> height;
	
	baseArea= pow(baseLength,2);
	surfaceArea= (2*baseLength*slantHeight)+baseArea;
	 volume= (baseArea*height)/3;
	 
	 cout<<	baseArea <<" "<< surfaceArea <<" "<< volume;
}