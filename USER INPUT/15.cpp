#include<iostream>
using namespace std;
main(){
	int a,b,s,h;
	int ba,sa,vol;
	cout<< "enter all";
	cin>>a>>b>>s>>h;
	ba= (5*a*b)/2;
	sa=ba+(5*b*s)/2;
	vol=(5*a*b*h)/6;
	
	cout<< ba <<" "<<sa<<" "<<vol;
}