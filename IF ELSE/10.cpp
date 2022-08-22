#include<iostream>
using namespace std;
int main()
{
	/*temp<=0 “very cold” 
 0<temp<=10 “cold”
10<temp<=20 “Cool out “
20<temp<=30 “Warm”
temp>30 “Hot”
*/
 	int t;
 	cout<<"enter the temp";
 	cin>>t;
 	if(t<=0){
 		cout<<"very cold";
	 }
	 else if(t>0,t<=10){
	 	cout<<"cold";
	 }
	 else if(t>10,t<=20){
	 	cout<<"cold out";
	 }
	 else if(t>20,t<=30){
	 	cout<<"warm";
	 }
	 else if(t>30){
	 	cout<<"hot";
	 }





}