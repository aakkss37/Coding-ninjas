#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "enter a no\n";
	cin >>num;
	bool divided = false;
	int d = 2;
	while(d < num){
		if(num%d == 0){
			cout<<"not prime\n";
			divided = true;
			break;
		}
		d = d+1;
	}
	if(!divided){
		cout<<"prime\n";
	}
}
