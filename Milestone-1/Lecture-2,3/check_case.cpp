#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<"ent a character \n";
	cin>>ch;
	if(ch>=65 && ch<=90){
		cout<<"1"<<endl;
	}
	else if(ch>=97 && ch<=122){
                cout<<"-1"<<endl;
	}
	else{
		cout<<"0";
	}


}

