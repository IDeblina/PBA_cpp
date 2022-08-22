#include<iostream>
using namespace std;

main(){
	int pNum, cNum, bNum, total, avg;
	cout << "Enter number for Physics";
	cin >> pNum;
	cout << "Enter number for Chemistry";
	cin >> cNum;
	cout << "Enter number for Biology";
	cin >> bNum;
	
	total  = pNum  + bNum + cNum;
	avg = total / 3;
	
	cout << "total number is " <<total <<  "\n";
	cout << "average is " << avg ;
	
	
}