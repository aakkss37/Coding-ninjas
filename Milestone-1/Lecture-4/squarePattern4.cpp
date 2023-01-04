#include<iostream>
using namespace std;

int main(){
	int n, row = 1, col = 1;
	cin>>n;
	while(row<=n){
		int count = 1;
		while(count<=row){
			cout<<col;	
			col++;
			count++;
		}

		cout <<endl;
		row++;
	}
}
