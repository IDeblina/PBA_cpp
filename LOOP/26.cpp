#include<iostream>
using namespace std;
int main()
{
	int s=0,i,r,t;	
	for(i=1; i<=1000; i++){
		while(i>0){
			r=i%10;
			s=s+(r*r*r);
			i=i/10;
		}
		cout<< s;
	}
}