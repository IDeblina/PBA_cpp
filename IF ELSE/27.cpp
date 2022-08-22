#include<iostream>
using namespace std;
main()
{
	int per1,per2,per3;
	cout<<"enter percentage of english \n";
	cin>>per1;
	cout<<"enter percentage of math \n";
	cin>>per2;
	cout<<"enter percentage of science \n";
	cin>>per3;
	if(per1>=80 && per2>=80 && per3>=80){
		cout<<"Pure Science";
	}
	else if(per1>=80 && per2>=60 && per3>=80){
		cout<<"bio Science";
	}
	else if(per1>=60 && per2>=60 && per3>=60){
		cout<<"Commerce";
	}
	
	
}