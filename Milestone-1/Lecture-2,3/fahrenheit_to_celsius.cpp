#include<iostream>
using namespace std;

int main(){
	int F;
	cout << "enter temp. in fahrenheit\n";
	cin >> F;
	int c = (F - 32) * (5/9); 
	cout << "(F - 32) * (5/9) = "<< c<<endl;
	int c1 = (F -32) * (5.0/9);
	cout << "(F -32) * (5.0/9) = "<< c1 << endl;

	cout << (F -32) * (5.0/9);
}
