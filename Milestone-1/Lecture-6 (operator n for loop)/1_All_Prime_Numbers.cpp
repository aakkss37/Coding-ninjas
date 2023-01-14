

#include<iostream>
using namespace std;

int main(){
	int N;
	cin>> N;
	cout<<2<<endl;
	for (int i = 3; i <= N; i++)
	{
		bool isPrime = true;
		/* code */
		for (int j = 2; j < i; j++)
		{
			/* code */
			if (i%j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if(isPrime == true){
			cout<<i<<endl;
		}
	}
}