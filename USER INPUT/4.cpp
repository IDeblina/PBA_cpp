#include<iostream>
using namespace std;

main(){
	int days,yNum,mNum,rdays ;
	cout << "enter number of days ";
	cin>>days;
	yNum= days/365 ;
	mNum = days/30 ;
	rdays= 365-days ;
	cout << "number of years is "<< yNum <<"\n";
	cout << "number of months is "<< mNum <<"\n";
	cout << "number of remaining days is "<< rdays ;
}