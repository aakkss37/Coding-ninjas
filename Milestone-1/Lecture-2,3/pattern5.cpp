#include<iostream>
using namespace std;


int main(){

		       /*  Read input as specified in the question.
				*  	* Print output as specified in the question.
				*  		*/
	int totalRow;
	cin>> totalRow;
	int currentRow = 1;

	while(currentRow <= totalRow){
		int space = totalRow - currentRow;
		int spaceCount = 1;
		while(spaceCount <= space){
			cout<<" ";
			spaceCount = spaceCount +1;
		}

		int star = (2*currentRow) - 1;
		int starCount = 1;
		while(starCount <= star){
			cout<<"*";
			starCount = starCount + 1;
		}
		cout<<endl;
		currentRow = currentRow + 1;
	}
						  
}



