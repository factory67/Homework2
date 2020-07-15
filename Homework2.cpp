#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "******************Homework2***************" << endl;
	string name;
	short salary, sale, percent,total;
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission percent : ";
	cin >> percent;
	total = (percent*sale/100)+salary;
	cout << "***************output*************" << endl;
	cout << "Your name = " << name << endl;
	cout << "Total Revenue  " << total << "bath" << endl; 
	return 0;
}