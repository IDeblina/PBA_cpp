#include<iostream>
using namespace std; 
int main()
{
	int n;
	cout<< "enter a number";
	cin>>n;
	if(n%2==0  && n%5==0)//AND=&&
	cout<< n<<" is divisible by both 2 and 5";
	else if(n%2==0 && n%5!=0)
	cout<< n<<" is divisible by 2 but not  5";
	else if (n%2!=0 && n%5==0)
	cout<< n<<" is divisible by 5 but not  2";
	else
	cout<<"not div by 2 and 5";
	
}