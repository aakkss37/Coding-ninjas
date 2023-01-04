/*
Print the following pattern for the given N number of rows.
Pattern for N = 4

The dots represent spaceCounts.

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines


Constraints
0 <= N <= 50

Sample Input 1:
3
Sample Output 1:
*
**
***

Sample Input 2:
4
Sample Output 2:
*
**
***
****

*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>> n;
	int row = 0;
	while(row<n){
		int star = n-row;
		int count = 0;
		while (count<star)
		{
			cout<<"*";
			count++;
		}
		cout<<endl;
		row++;
		
	}
}

