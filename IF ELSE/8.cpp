#include<iostream>
using namespace std;
int main()
{
	int a,b,c ;
	cout<< "enter three numbers \n";
	cin>>a>>b>>c;
	if(a<b,a<c){
		cout<< a<<" is the smallest";
	}
	else if(b<a,b<c){
		cout<< b<<" is the smallest";
	}
	else if(c<a,c<b){
		cout<<c<<" is the smallest";
	}
}