#include<iostream>
using namespace std;
main()
{
	int i,sum=0,sum1=0;
	for(i=1; i<=10;i++){
		if(i%2==0){
		 	sum=sum+i;
		}
		else if(i%2!=0){
			sum1= sum1+i;	
		}
	}
	cout<<"sum of the even numbers is "<< sum <<"\n";
	cout<<"sum of the odd numbers is "<< sum1;
	}
