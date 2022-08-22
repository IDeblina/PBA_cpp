#include<iostream>
using namespace std;
main()
{
	int age;
	string gender;
	string status;
	bool isInsured = false;
	cout<<"enter driver's age";
	cin>>age;
	cout<<"enter driver's gender";
	cin>>gender;
	cout<<"enter driver's status";
	cin>> status;
	if(status=="married" || (status=="unmarried" && gender=="male" && age>30) || (status=="unmarried" && gender=="female" && age>25) )
	{
		
		
		/*isInsured= true;
	}
	else{
		isInsured= false;
	}
	if(isInsured= true){*/
		cout<<"driver is insured";
	}
	else{
		cout<<"driver is not insured";
	}


}
