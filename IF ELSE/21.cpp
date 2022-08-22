#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter three numbers";
	cin>>a>>b>>c;
	if((a*a+b*b)==(c*c))
	{
		cout<<"Pythagorean Triple";
	}
	else{
		cout<<"not Pythagorean Triple";
	}
}