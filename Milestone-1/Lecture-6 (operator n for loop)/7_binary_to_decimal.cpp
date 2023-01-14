/*

Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7

*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int num=0;
	int i=0;
	while(n>0){
		if(n%10 == 1){
			num = num+pow(2, i);
		}
		n=n/10;
		i++;
	}
	cout<<num;
}