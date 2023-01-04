#include <iostream>
using namespace std;

int main()
{
	// Write your code here
	int n;
	cin >> n;
	int even = 0, odd = 0;


	while (n > 0)
	{
		int x = n%10;
		if (x%2 == 0)
		{
			even = even+x;
		}else{
			odd = odd+x;
		}

		n = n/10;
		
	}

	cout<<even<<" "<< odd;
}