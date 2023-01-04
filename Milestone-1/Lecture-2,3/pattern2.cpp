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
		while(numCount <= currentRow){
			cout<<numCount;
			numCount = numCount+1;
		}

		cout<<endl;
		currentRow = currentRow + 1;
	}
}


