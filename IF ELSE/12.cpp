#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"enter a number";
	cin>>n;
	if(n*n%10==n || n*n%100==n || n*n%1000==n)
	cout<<n<<" is automorphic";
	else 
	cout<< n<< " isn't automorphic";
}