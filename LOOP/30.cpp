#include<iostream>
using namespace std;
main()
{
	int num,i;
	cout<<"enter a number";
	cin>>num;
	for(i=1; i<num; i++){
		if(num%i==0){
		cout<<i<<" ";
		}
	}
	
	
}