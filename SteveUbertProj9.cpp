/*Steven Ubert
11-29-2020
number counting and recursive function
 CSCI 121 Computer Science I */

#include <iostream>
#include<ios>   
#include<limits>
#define N 101 // this is for size of array for 100 character

using namespace std;
int sum(int n)
// Recursive version to calculate the sum of
// 1 + 2 + .... + n
{
	if (n <= 0)
	{
		return 0;
	}
	return n + sum(n - 1);
}
// For str_length:
// option 1:
int str_length(char s[], int counter)
{
	if (s[0] == '\0')
	{
		return counter;
	}
	return str_length((s + 1), ++counter);
}
// // option 2:
int str_length(char s[])
// Recursive version of strlen in C strings.
// It returns the length of the string s[].
// (the null character, '\0', is not counted in the length)
{
	if (s[0] == '\0')
	{
		return 0;
	}
	return 1 + str_length((s + 1));
}
int main()
{

	char s[N] = { '\0' };
	char choice = 'y';
	int num;
	while (true)
	{
		cout << "Enter a positive integer: ";
		cin >> num;
		cout << "The sum of 1+2+...+" << num << " is: " << sum(num) << endl;
		cout << "Enter a sentence: ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.get(s, sizeof(s));
		cin.get(); 
		cout << "It contains " << str_length(s) << " chars, including white spaces" << endl;
		cout << "Do you want to have another run? Y/N: ";
		cin >> choice;

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (choice == 'n' || choice == 'N')
		{
			break;
		}
	}
	return 0;
}

/*Output
Enter a positive integer: 10
The sum of 1+2+...+10 is: 55
Enter a sentence: Hello World!
It contains 12 chars, including white spaces
Do you want to have another run? Y/N: y
Enter a positive integer: 1000
The sum of 1+2+...+100 is: 5050
Enter a sentence: I Love Progrmammning!
It contains 19 chars, including white spaces
Do you want to have another run? Y/N: n


*/