/*Steven Ubert
11-17-2020
Scores and Sentences
 CSCI 121 Computer Science I */

#include<vector>
#include<iostream>

using namespace std;

void get_scores(vector<int>& v)
{
	int n;
	cout << "Enter an array of scores between 0 and 100. Enter '-1' to stop: ";
	cin >> n;

	while (n != -1)
	{
		v.push_back(n);
		cin >> n;
	}
}
// get integer scores from keyboard and store in v.
// we assume that the user will input scores in range
// of 0 to 100, inclusive. User enter a negative
// number to stop the input and end the function

void print_stats(vector<int>& v)

{
	int len = v.size();
	int maximum, minimum, sum = 0;
	if (len > 0)
	{
		int i = 0, k;
		maximum = minimum = v.at(0);
		for (i = 0; i < len; i++)
		{
			k = v.at(i);
			sum = sum + k;
			if (k > maximum)maximum = k;
			if (k < minimum)minimum = k;

		}
		double average = sum * 1.0 / len;
		cout << "Number of scores entered: " << len << "\n";
		cout << "The highest score is: " << maximum << endl;
		cout << "The lowest score is: " << minimum << endl;
		cout << "The average of the scores is: " << average << endl;
	}
	else
	{
		cout << "No score was entered.\n";
	}
}

// print out the stats of data that are stored in v
// includes: max, min, total number of data,
// and the average

bool isPalindrome(string s)
{
	bool status = true;
	int index = s.size() - 1, i = 0;

	while (i < index)
	{
		if (s[i] == ' ')
		{
			++i;
			continue;
		}
		else if (s[index] == ' ')
		{
			--index;
			continue;
		}

		else if (tolower(s[i]) != tolower(s[index]))
		{
			return false;
		}
		++i;
		--index;
	}
	return status;
}

int main()

{
	char ch;
	string s;

	while (1)
	{
		vector<int> v;
		get_scores(v);
		print_stats(v);
		cout << "Do you want to try another set of scores? (Y/N): ";
		cin >> ch;
		if (ch == 'N' || ch == 'n')
			break;
	}

	while (1)
	{
		cout << "Enter a sentence: ";
		getline(cin, s);
		getline(cin, s);
		if (!isPalindrome(s))
			cout << "\"" << s << "\"" << " is not a Palindrome\n";
		else cout << "\"" << s << "\"" << " is a Palindrome\n";
		cout << "Do you want to try another sentence? Y/N: ";
		cin >> ch;
		if (ch == 'N' || ch == 'n')
			break;
	}
	return 0;
}

/*Output
Enter an array of scores between 0 and 100. Enter '-1' to stop : 87
98
65
78
88
93
- 1
Number of scores entered : 6
The highest score is : 98
The lowest score is : 65
The average of the scores is : 84.8333
Do you want to try another set of scores ? (Y / N) : y
Enter an array of scores between 0 and 100. Enter '-1' to stop : -1
No score was entered.
Do you want to try another set of scores ? (Y / N) : n
Enter a sentence : A nut for a jar of tuna
"A nut for a jar of tuna" is a Palindrome
Do you want to try another sentence ? Y / N : y
Enter a sentence : Hello world
"Hello world" is not a Palindrome
Do you want to try another sentence ? Y / N : n*/


