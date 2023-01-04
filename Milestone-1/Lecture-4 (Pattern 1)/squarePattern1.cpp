#include<iostream>
using namespace std;
/*
output pattern example:-
4321
4321
4321
4321
*/

int main(){
	int n;
	cin>> n;
	int rowCount = 1;
	int columnCount;

	while(rowCount <= n){
		columnCount = 0;
		while(columnCount<n){
			cout<< n-columnCount;
			columnCount++;
		}
		cout<<endl;
		rowCount++;
	}
}
