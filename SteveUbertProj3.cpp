//Steven Ubert
//09-12-2020
/*Simple game of "23"
 CSCI 121 Computer Science I */

#include <iostream>
using namespace std;

// defining the main () function.
int main()
{
	//declare variables
	int pick_Human = 0;
	int pick_Computer = 0;
	int toothpick;
	char choice;

	//do-while loop unitl the user wants to exit the program
	do
	{
		/*setting toothpick to interger 23.
		introduction output*/
		toothpick = 23;
		cout << "Let's play a game of \"23\"!";
		cout << endl;

		//While loop to repeat until toothpick value is greater than 0
		while (toothpick > 0)
		{
			/*Prompts user to enter a number of toothpicks to take and
			sets their pick as pick_Human variable*/
			cout << "Enter the number of sticks you wish to pick: " << endl;
			cin >> pick_Human;
			
			//nested loop verfiying the number the user entered is valid
			while (pick_Human < 1 || pick_Human > 3 || pick_Human > toothpick)
			{
				/*if statement checking against the user number
				to inform them to select again and prompt the vaild selections*/
				if (pick_Human > 3 || pick_Human < 1)
				{
					cout << "Wrong number of sticks. Please pick 1, 2, or 3 sticks: ";
					cout << endl;
					cin >> pick_Human;
				}
				
				/*Check against total toothpicks in the pile to prompt the user
				to select a vaild entry because there is too few toothpicks left.*/
				else
				{
					cout << "\nNot enough sticks in the pile. Please enter vaild choice by picking 1, 2, or 3 sticks: ";
					cin >> pick_Human;
				}
			}

			/*Arithmetic to update the value of toothpicks left in the pile after the user selects.
			Output message to user there selection and amount left to take from*/
			toothpick = toothpick - pick_Human;
			cout << "\nYou picked " << pick_Human << " sticks. " << toothpick << " left" << endl;
		
			//If statement comparing the value of toothpicks to prompt if the users selection ended the game.
			if (toothpick == 0)
			{
				cout << "You picked the last stick." << endl;
				cout << "Sorry, the computer beat you!";
				cout << endl;
				break;
			}

			//Arithmetic and If-else statements for the computers selection rules
			if (toothpick > 4)
			{
				pick_Computer = 4 - pick_Human;
			}
			else if (toothpick == 1)
			{
				pick_Computer = toothpick;
			}
			else
			{
				pick_Computer = toothpick - 1;
			}

			//Arithmetic to update the toothpick total after the computer selects
			toothpick = toothpick - pick_Computer;
			cout << "\nComputer picked " << pick_Computer << " sticks. " << toothpick << " left" << endl;

			//If statement comparing the value of toothpicks to prompt if the computers selection ended the game.
			if (toothpick == 0)
			{
				cout << "Computer picked the last stick." << endl;
				cout << "Congratulations, you beat the computer!";
				cout << endl;
				break;
			}
			cout << "\nYour turn.  ";
		}
		//Prompt for user to play again
		cout << "Do you wish to play another game? <Y/N>: ";

		cin >> choice;

	} while (choice == 'Y' || choice == 'y');

	return 0;

}
	
/*Output
Let's play a game of "23"!
Enter the number of sticks you wish to pick:
2

You picked 2 sticks. 21 left

Computer picked 2 sticks. 19 left

Your turn.  Enter the number of sticks you wish to pick:
3

You picked 3 sticks. 16 left

Computer picked 1 sticks. 15 left

Your turn.  Enter the number of sticks you wish to pick:
4
Wrong number of sticks. Please pick 1, 2, or 3 sticks:
0
Wrong number of sticks. Please pick 1, 2, or 3 sticks:
2

You picked 2 sticks. 13 left

Computer picked 2 sticks. 11 left

Your turn.  Enter the number of sticks you wish to pick:
3

You picked 3 sticks. 8 left

Computer picked 1 sticks. 7 left

Your turn.  Enter the number of sticks you wish to pick:
2

You picked 2 sticks. 5 left

Computer picked 2 sticks. 3 left

Your turn.  Enter the number of sticks you wish to pick:
1

You picked 1 sticks. 2 left

Computer picked 1 sticks. 1 left

Your turn.  Enter the number of sticks you wish to pick:
1

You picked 1 sticks. 0 left
You picked the last stick.
Sorry, the computer beat you!
Do you wish to play another game? <Y/N>: y
Let's play a game of "23"!
Enter the number of sticks you wish to pick:
3
Wrong number of sticks. Please pick 1, 2, or 3 sticks:
3

You picked 3 sticks. 20 left

Computer picked 1 sticks. 19 left

Your turn.  Enter the number of sticks you wish to pick:
3

You picked 3 sticks. 16 left

Computer picked 1 sticks. 15 left

Your turn.  Enter the number of sticks you wish to pick:
3

You picked 3 sticks. 12 left

Computer picked 1 sticks. 11 left

Your turn.  Enter the number of sticks you wish to pick:
3

You picked 3 sticks. 8 left

Computer picked 1 sticks. 7 left

Your turn.  Enter the number of sticks you wish to pick:
3

You picked 3 sticks. 4 left

Computer picked 3 sticks. 1 left

Your turn.  Enter the number of sticks you wish to pick:
3

Not enough sticks in the pile. Please enter vaild choice by picking 1, 2, or 3 sticks: 1

You picked 1 sticks. 0 left
You picked the last stick.
Sorry, the computer beat you!
Do you wish to play another game? <Y/N>: y
Let's play a game of "23"!
Enter the number of sticks you wish to pick:
2

You picked 2 sticks. 21 left

Computer picked 2 sticks. 19 left

Your turn.  Enter the number of sticks you wish to pick:
3

You picked 3 sticks. 16 left

Computer picked 1 sticks. 15 left

Your turn.  Enter the number of sticks you wish to pick:
1

You picked 1 sticks. 14 left

Computer picked 3 sticks. 11 left

Your turn.  Enter the number of sticks you wish to pick:
1

You picked 1 sticks. 10 left

Computer picked 3 sticks. 7 left

Your turn.  Enter the number of sticks you wish to pick:
2

You picked 2 sticks. 5 left

Computer picked 2 sticks. 3 left

Your turn.  Enter the number of sticks you wish to pick:
2

You picked 2 sticks. 1 left

Computer picked 1 sticks. 0 left
Computer picked the last stick.
Congratulations, you beat the computer!
Do you wish to play another game? <Y/N>: n



*/