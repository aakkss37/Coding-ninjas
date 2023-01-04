#include<iostream>
using namespace std;

int main(){
	int n, row = 1;
	cin>>n;
	while(row<=n){
		int col = 1;
		int colStart = row;
		while(col<=row){
			cout<<colStart;
			colStart++;
			col++;
		}

		cout <<endl;
		row++;
	}
}
