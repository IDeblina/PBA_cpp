#include<iostream>
using namespace std;
main()
{
	int num,sum=0;
	cout<<"enter a number ";
	cin>>num;
	for(int i=1; i<num; i++){
		if(num%i==0){
			cout<<i<<" ";
			sum=sum+i;
		}
	}
	cout<<"\n"<<"sum of the factors is "<<sum+num;
}