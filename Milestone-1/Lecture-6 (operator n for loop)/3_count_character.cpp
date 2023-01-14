#include <iostream>
using namespace std;

int main()
{
	int character = 0;
	int digit = 0;
	int spaces = 0;

	char ch;
	ch = cin.get();

	while (ch != '$')
	{

		if (ch >= 'a' && ch <= 'z')
		{
			character++;
		}

		if (ch >= '0' && ch <= '9')
		{
			digit++;
		}

		if (ch == ' ' || ch == '\n' || ch == '\t')
		{
			spaces++;
		}

		ch = cin.get();
	}

	cout << character << " " << digit << " " << spaces << endl;
}
