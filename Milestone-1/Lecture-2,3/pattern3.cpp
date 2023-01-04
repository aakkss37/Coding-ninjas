#include<iostream>
using namespace std;

int main(){
	int totalRow;
	cout << "enter the total row: -- ";
	cin>>totalRow;
	int currentRow = 1;
	
	while(currentRow <= totalRow){
		int count = 1;
		int value = currentRow;
		while(count <= currentRow){
			cout<<value;
			value = value + 1;
			count = count + 1;
		}
		cout<<endl;
		currentRow = currentRow + 1;
	}
}
