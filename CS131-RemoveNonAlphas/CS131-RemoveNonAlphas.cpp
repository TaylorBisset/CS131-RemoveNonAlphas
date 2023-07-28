/*
Write a program that removes all non-alphabetic characters from the given input.

Ex: If the input is:

-Hello, 1 world$!
the output is:

Helloworld
Your program must define and call the following function that takes a string as a 
parameter and returns the string without any non-alphabetic characters.
string RemoveNonAlpha(string userString)
*/

#include <iostream>
using namespace std;

string RemoveNonAlpha(string userString)
{
	string result = "";
	for (char c : userString)
	{
		if (isalpha(c))
		{
			result += c;
		}
	}
}

int main() 
{
	/* Type your code here. Your code must call the function.  */

	return 0;
}
