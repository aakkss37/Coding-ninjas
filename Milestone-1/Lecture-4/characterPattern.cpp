#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int row=1;
	char ch=65;
	while (row <= n)
	{
		int col = 1;
		while (col <= row)
		{
			cout << ch;
			col++;
		}
		cout << endl;
		row++;
		ch++;
	}
}
