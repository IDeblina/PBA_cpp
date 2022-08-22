#include<iostream>
using namespace std;
main()
{
	int per;
	cout<<"enter percentage \n";
	cin>>per;
	if(per>=80){
		cout<<"Distinction";
	}
	if(per<80 && per>=60){
		cout<<"First Division";
	}
	if(per<60 && per>=45){
		cout<<"second Division";
	}
	if(per<45 && per>=40){
		cout<<"pass";
	}
	if(per<40){
		cout<<"Promotion not Granted";
	}
	
}