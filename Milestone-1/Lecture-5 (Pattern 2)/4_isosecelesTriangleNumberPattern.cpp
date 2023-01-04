/*

Code : Inverted Number Pattern

Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4
   1
  121
 12321
1234321

-----------------------------------------------------------------------
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines

Constraints :
0 <= N <= 50
-----------------------------------------------------------------------

Sample Input 1:
5
Sample Output 1:
	1
   121
  12321
 1234321
123454321

Sample Input 2:
6
Sample Output 2:
     1
	121
   12321
  1234321
 123454321
12345654321

*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int rowNumber = 1;
	while (rowNumber<= n)
	{
		int spaceCount = 1;
		while(spaceCount<= (n-rowNumber)){
			cout<<" ";
			spaceCount++;
		}
		int numCount = 1;
		while (numCount <= rowNumber)
		{
			cout<<numCount;
			numCount++;
		}

		numCount = rowNumber-1;
		while (numCount>=1)
		{
			cout<<numCount;
			numCount--;
		}
		cout<<endl;
		rowNumber++;
	}
	
}