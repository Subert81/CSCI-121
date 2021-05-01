//"Name Goes Here!"
//09-01-2020
/*Harris-Benedict calculator
 CSCI 121 Computer Science I */

#include <iostream>
using namespace std;

int main()
{
	//Introduction line for program
	cout << "Welcome to my BMR calculator.\n";

	double weight, height, bmr, num_Bars;
	const int chocolate_Bars = 230; 
	int age_Years;
	char gender, choice;

	//do-while loop runs then prompts user to exit by entering 'n' or 'N' 
	do
	{
		//Prompt for gender entery
		cout << "Please enter a letter for your gender (M or F): ";
		cin >> gender;

		//while loop to check valid input from the user
		while (!((gender == 'm' || gender == 'M' || gender == 'f' || gender == 'F')))
		{
			cout << "Invalid input. Please try again. Select either M or F: ";
			cin >> gender;
		}

		//prompt for entering in weight
		cout << "Please enter your weight (in pounds): ";
		cin >> weight;

		//prompt for entering in height
		cout << "Please enter your height (in inches): ";
		cin >> height;
		
		//prompt for entering in age
		cout << "Please enter your age (in years): ";
		cin >> age_Years;

		//if-else check on which gender to calculate BMR
		if (gender == 'F' || gender == 'f')
		{
			bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age_Years);
			num_Bars = bmr / chocolate_Bars;
			cout << "She needs " << bmr << " to maintain her weight." << endl;
			cout << "She needs to eat " << num_Bars << " candy bar's calories." << endl;
		}
		else
		{
			bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age_Years);
			num_Bars = bmr / chocolate_Bars;
			cout << "He needs " << bmr << " to maintain her weight." << endl;
			cout << "He needs to eat " << num_Bars << " candy bar's calories." << endl;
		}

		//Prompt for another calculation
		cout << "Do you want to make another calculation? (Y/N)\n";
		cin >> choice;

		//while loop to check for correct user input
		while (!(choice == 'n' || choice == 'N' || choice == 'y' || choice == 'Y'))
		{
		cout << "Do you want to make another calculation? (Y/N)\n";
		cin >> choice;
		}
	
	//prompt for exiting program
	} while (!(choice == 'N' || choice == 'n'));
	cout << "Thank you for using my BMR calculator. Good-bye!\n";
	cout << "Program ended with exit code: 0" << endl;
	return 0;
}
