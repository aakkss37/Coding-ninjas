#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char ch=65+n;
	int row=1;

	while (row <= n)
	{
		char col = ch-row;
		int colCount = 1;
		while (colCount <= row)
		{
			cout << col;
			col++;
			colCount++;
		}
		cout << endl;
		row++;
	}
}
