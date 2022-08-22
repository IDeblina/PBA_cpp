#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a,b;
	double s;
	cout<<"enter the no ";
	cin>>a>>b;
	s=tan(a)-tan(b)/1+tan(a)*tan(b);
	cout<<"Tan(a-b)="<<s;
}