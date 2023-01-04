/*

Code : Inverted Number Pattern

Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4
   1
  232
 34543
4567654


Pattern for N = 5
    1
   232
  34543
 4567654
567898765
*/

#include <iostream>
using namespace std;

int main()
{
	
	int n;
	cin >> n;
	int rowNumber = 1;
	while (rowNumber <= n)
	{
		
		int spaceCount = 1;
		while (spaceCount <= (n - rowNumber))
		{
			cout << " ";
			spaceCount++;
		}
		int toPrint = rowNumber;
		int numCount = 1;
		while (numCount <= rowNumber)
		{
			cout << toPrint;
			toPrint++;
			numCount++;
		}

		toPrint = toPrint-2;
		numCount = rowNumber - 1;
		while (numCount >= 1)
		{
			cout << toPrint;
			toPrint--;
			numCount--;
		}
		cout << endl;
		rowNumber++;
	}
}
