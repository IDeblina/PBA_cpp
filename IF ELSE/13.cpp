#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,sum,total=500;
	int per;
	cout<<"enter five marks";
	cin>>a>>b>>c>>d>>e;
	sum=a+b+c+d+e;
	per= (sum*100)/total;
	if(per>=80){
		cout<<"grade is E+";
	}
	else if(per>=70 && per<80){
		cout<<"grade is E";
	}
	else if(per>=60 && per<70){
		cout<<" grade is A+ ";
	}
	else if(per>=50 && per<60){
		cout<<" grade is A";
	}
	else if(per>=40 && per<50){
		cout<<"grade is B";
	}
	else if(per<40){
		cout<<"fail";
	}
	
	
	
	
}