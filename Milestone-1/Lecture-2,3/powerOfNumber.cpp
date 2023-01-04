#include <iostream>

using namespace std;

int main()
{
	// Write your code here
	int base, exponent;
	cin >> base;
	cin>> exponent;

	int count = 1;
	int answer = 1;

	while(count <= exponent){
		answer = answer * base;
		count++;
	}
	cout<<"final answer- "<<answer<<endl;




	// int base, exponent, answer, count;
	// // Reading base & exponent
	// cout << "Enter base: ";
	// cin >> base;
	// cout << "Enter exponent: ";
	// cin >> exponent;
	// answer = 1;
	// count = 1;
	// // caculatinh answer of given number
	// while (count <= exponent)
	// {
	// 	answer = answer * base;
	// 	count++;
	// }
	// cout << "answer of " << base << " is: " << answer;
}