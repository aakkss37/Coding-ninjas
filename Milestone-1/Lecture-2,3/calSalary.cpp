#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	// Write your code here
	cout << "enter basic and grade \n";
	int basic;
	char grade;
	cin >> basic >> grade;

	double hra = (20 * basic) / 100.00;
	cout<<"hra= "<<hra<<endl;
	double da = (50 * basic) / 100.00;
	cout<<"da= " << da<<endl;
	double pf = (11 * basic) / 100.00;
	cout<<"pf = " << pf<<endl;
	int allow;
	if (grade == 'A')
	{
		allow = 1700;
	}
	else if (grade == 'B')
	{
		allow = 1500;
	}
	else
	{
		allow = 1300;
	}
	cout<<"allow= "<<allow<<endl;
	double nopf = basic + hra + da + allow ;
	cout <<"nopf= "<<nopf<<endl;
	double totalSalary = (basic + hra + da + allow) - pf;
	cout<<"totalSalary = " << totalSalary <<endl;
	cout<<"totalSalary rounded = " << round(totalSalary);
}
