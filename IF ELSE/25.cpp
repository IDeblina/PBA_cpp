#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"enter two number \n";
	cin>>a>>b;
	if(a>0 && b>0){
		cout<<"First Quadrant";
	}
	if(a<0 && b>0){
		cout<<"second Quadrant";
	}
	if(a<0 && b<0){
		cout<<"third Quadrant";
	}
	if(a>0 && b<0){
		cout<<"Forth Quadrant";
	}
	
}