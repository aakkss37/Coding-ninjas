#include<iostream>
using namespace std;

int main(){
	int totalRow;
	cout << "enter the total row: -- ";
	cin>>totalRow;
	int currentRow = 1;
	while(currentRow <= totalRow){

		int spaceCount = 1;
		int space = totalRow-currentRow;
		while(spaceCount <= space){
			cout<<" ";
			spaceCount = spaceCount +1;
		}
		
		int numCount = 1;
		int printValue = currentRow;
		while(numCount <= currentRow){
			cout<<printValue;
			printValue = printValue + 1;
			numCount = numCount+1;
		}

		cout<<endl;
		currentRow = currentRow + 1;
	}
}


