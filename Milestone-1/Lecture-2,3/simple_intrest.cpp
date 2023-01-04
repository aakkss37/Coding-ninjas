#include <iostream>
using namespace std;

int main(){
	int p, r, t, si;
	cout << "principle";
	cin >> p;
	cout << "rate";
	cin >> r;
	cout << "time";
	cin >> t;

	si = p*r*t/100;

	cout << "simple intrest = " << si;
	return 0;
}
