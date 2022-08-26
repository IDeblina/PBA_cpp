#include<iostream>
using namespace std;
main()
{
	int num,i,sum=0;
	cout<<"enter a number";
	cin>>num;
	for(i=1; i<num; i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(num==sum){
		cout<<num<<" is perfect number";
	}
	else{
		cout<<num<<" is not perfect number";
	}
	
}