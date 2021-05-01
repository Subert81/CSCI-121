//"Name Goes Here!"
//09-30-2020
/*The temperature of earth at a depth
 CSCI 121 Computer Science I */

#include <iostream>
using namespace std;

void print_introduction();
// prints out information to tell the user what this program does.

double celsius_at_depth(double);
// computes and returns the celsius temperature at a depth measured in kilometers.

double celsius_to_farhen(double);
// converts a Celsius temperature celsius to Fahrenheit.

void print_conclusion(double);
/* display the conclusion that what is the temperature in both Celsius and Fahrenheit at depth
of the earth*/

int main() 
{

	double depth;
	print_introduction();
	while (1)
	{
		cout << "Enter a depth in KM: ";
		cin >> depth;

		print_conclusion(depth);
		cout << "Would you like to do it again? (Y/N): ";
		char choice;
		cin >> choice;
		if (choice == 'n' || choice == 'N')
			break;
	}
}
void print_introduction()
{
	cout << "Hello! The program will tell you the temperature of earth at any depth" << endl;
}
double celsius_at_depth(double depth)
{
	double a = ((10 * depth) + 20);
	return a;
}
double celsius_to_fahren(double celsius) {
	double b = (9.0 / 5.0) * celsius + 32;
	return b;
}
void print_conclusion(double depth)
{
	double cTemperature, fTemperature;
	cTemperature = celsius_at_depth(depth);
	fTemperature = celsius_to_fahren(cTemperature);
	cout << "The temperature of the earth at a depth of " << depth << " KM is " << cTemperature << " in Celsius, and " << fTemperature << " in Fahrenheit" << endl;
}

/*Output
Hello! The program will tell you the temperature of earth at any depth
Enter a depth in KM: 10
The temperature of the earth at a depth of 10 KM is 120 in Celsius, and 248 in Fahrenheit
Would you like to do it again? (Y/N): y
Enter a depth in KM: 20
The temperature of the earth at a depth of 20 KM is 220 in Celsius, and 428 in Fahrenheit
Would you like to do it again? (Y/N): Y
Enter a depth in KM: 1051
The temperature of the earth at a depth of 1051 KM is 10530 in Celsius, and 18986 in Fahrenheit
Would you like to do it again? (Y/N): y
Enter a depth in KM: 6547
The temperature of the earth at a depth of 6547 KM is 65490 in Celsius, and 117914 in Fahrenheit
Would you like to do it again? (Y/N): Y
Enter a depth in KM: 15
The temperature of the earth at a depth of 15 KM is 170 in Celsius, and 338 in Fahrenheit
Would you like to do it again? (Y/N): y
Enter a depth in KM: 187
The temperature of the earth at a depth of 187 KM is 1890 in Celsius, and 3434 in Fahrenheit
Would you like to do it again? (Y/N): Y
Enter a depth in KM: 652
The temperature of the earth at a depth of 652 KM is 6540 in Celsius, and 11804 in Fahrenheit
Would you like to do it again? (Y/N): y
Enter a depth in KM: 123465789
The temperature of the earth at a depth of 1.23466e+08 KM is 1.23466e+09 in Celsius, and 2.22238e+09 in Fahrenheit
Would you like to do it again? (Y/N): N
*/
