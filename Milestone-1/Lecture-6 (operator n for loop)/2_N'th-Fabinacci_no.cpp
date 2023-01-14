#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int n1 = 0, n2 = 1;
	int fn;
	for (int i = 0; i < N-1; i++)
	{
		/* code */
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
	cout << fn<< ", ";
	}
}