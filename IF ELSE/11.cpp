#include<iostream>
using namespace std;
int main()
{
	int n ;
	cout<< "enter a number";
	cin>>n;
	if(n%7==0 || n%10==7 ){
		cout<< n<<" is buzz number";
	}
	else{
		cout<< n<< " is not buzz number";
	}
	
}
