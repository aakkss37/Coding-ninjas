#include<iostream>
using namespace std;

int main(){
	int totalRow;
	cout << "enter the total row: -- ";
	cin>>totalRow;
	int currentRow = 1;
	while(currentRow <= totalRow){
		int count = 1;
		while(count <= currentRow){
			cout<<count;
			count = count +1;
		}
		cout<<endl;
		currentRow = currentRow +1;
	}
}
