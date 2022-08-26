#include<iostream>
using namespace std;
main()
{
	int num,c=0,i;
	cout<<"enter a number ";
	cin>>num;
	for( i=1; i<num; i++){
		if(num%i==0){
			c=0;
			for(int j=1; j<=i; j++){
				if(i%j==0){
					c++;
				}
				//cout<<c;
				if(c==2){
					cout<<i<<" ";
				}
			}
		}
	}
}
	
	
/*
DRY RUN
num=6
i=1 1<6 true 
if 6%1==0 true 
for j=1 1=1 true 1%1==0 c=1
j=2 2<1 false 

i=2 2<6 true 
if 6%2==0 true 
for j=2 2=2 true 2%2==0 c=2   cout =2
j=3 3<2 false 

i=3 3<6 true 
if 6%3==0 true 
for j=3 3=3 true 3%3==0 c=3
*/