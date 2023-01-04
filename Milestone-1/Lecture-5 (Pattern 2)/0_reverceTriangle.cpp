/**
 -> Expected Output for N = 5;
    *
   **
  ***
 ****
*****

**/

#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

int row = 1;
while (row <= n)
{
	int spaceCount  = 1;
	while (spaceCount <= (n-row)){
		cout<<" ";
		spaceCount++;
	}
	int starCount = 1;
	while(starCount <= row){
		cout<<"*";
		starCount++;
	}
	cout<<endl;
	row++;
}


}