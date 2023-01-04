/*

Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
  


Sample Input 2:
3
Sample output 2:
 *
***
 *
*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int totalUpRow = (n/2.0)+0.5;
	int currentRow =1;
	while (currentRow <= totalUpRow)
	{
		int spaceCount = 1;
		while (spaceCount <= (totalUpRow-currentRow))
		{
			cout<<" ";
			spaceCount++;
		}
		int starCount = 1;
		while (starCount<=(2*currentRow)-1)
		{
			cout<<"*";
			starCount++;
		}
		cout<<endl;
		currentRow++;
		
	}
	
	int lastUpRow = currentRow;
	// cout<<lastUpRow;
	int rowLeft = lastUpRow-1;
	// cout<<rowLeft;
	while (rowLeft>=1)
	{
		int spaceCount = 1;
		while(spaceCount <= lastUpRow-rowLeft)
		{
			cout<<" ";
			spaceCount++;
		}
		int star = 1;
		while (star <= (rowLeft*2)-3)
		{
			cout<<"*";
			star++;
		}
		cout<<endl;
		rowLeft--;
		
	}
	
	
}