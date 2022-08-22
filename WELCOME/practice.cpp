#include<iostream>
using namespace std;
	//default function
//void printname()
//{
//	cout<< "deblina";
//}
//string myfunction()
//{
//	return "ab";	
//}
//int addition()
//{
//	return 3+4 ;
//}
//bool isactive()
//{
//	return false;
//}

	//paramitarized function
	
	int oparation(int n1,int n2)
	{
	 return n1-n2 ;	
	}
	
	bool isodd(int num)
	{
	 if(num%2==0){
	 return false;
	 }	
	 else{
	 	return true;
	 }
	}
	
	int myfunc(string str)
	{
		return str.length();
	}
	void printfactors(int num)
	{
		for(int i=1; i<=num-1; i++){
		 if(num%i==0){
		   cout<< i;
        	}
		}
		
	}
	int printfact(int num)
	{
		int t=0;
		for(int i=num; i>=1; i--){
			t=t+i ;
		}
		return t;
	}
	
	
main()
{
     int fact = printfact(5);
     cout<< fact;
 	
 	 
}