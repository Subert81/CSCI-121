/*"Name Goes Here!"
11-06-2020
Array and Menu function 
 CSCI 121 Computer Science I */

#include <iostream>

using namespace std;

void fill_array(int arr[], int size) 
{
	cout << "Enter " << size << " elements of array separated by a space:" << endl;
	for (int i = 0; i < size; i++)
		cin >> arr[i];

}
// precondition: The arr has actual size that is greater than or equal to size
// postcondition: arr[0], ..., arr[size-1] is filled from keyboard

void print_array(int arr[], int size) 
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}
// precondition: The arr has actual size that is greater than or equal to size
// postcondition: arr[0], ..., arr[size-1] is printed to screeen with 5 elements per line

int linear_search(int arr[], int size, int key) 
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
}
// precondition: arr has given size
// postcondition: The index of first occurrence of key in arr is returned. If the key cannot be found in arr, -1 is returned

void select_sort(int arr[], int size) 
{ 
	int min, index;
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		min = arr[i];
		index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

}
// precondition: arr has given size
// postcondition: the elements in arr are rearranged from least to largest

void insert_sort(int arr[], int size) 
{ 
	int temp;
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j >= 1; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			else
				break;
		}
	}
}
// precondition: arr has given size
// postcondition: the elements in arr are rearranged from least to largest

void bubble_sort(int arr[], int size)
{
	int temp;
	for (int i = 1; i < size; ++i)
	{
		for (int j = 0; j < (size - i); ++j)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}

}
// precondition: arr has given size
// postcondition: the elements in arr are rearranged from least to largest

void menu() { //menu function
	cout << "\n\t***************************************************";
	cout << "\n\t*                   Menu                          *";
	cout << "\n\t*1. Linear Search                                 *";
	cout << "\n\t*2. Selection Sort                                *";
	cout << "\n\t*3. Insertion Sort                                *";
	cout << "\n\t*4. Bubble Sort                                   *";
	cout << "\n\t*5. Quit                                          *";
	cout << "\n\t***************************************************";

}

int main() {
	int choice;
	int a[9];
	do {
		menu();
		cout << "\nEnter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			fill_array(a, 9);
			cout << "Enter the key you want to search: ";
			int key;
			cin >> key;
			int index = linear_search(a, 9, key);
			if (index == -1)
				cout << "The key " << key << " is not in array\n";
			else
				cout << "The key " << key << " is #" << (index + 1) << " element in array\n";
			break;
		}
		case 2:
		{
			fill_array(a, 9);
			select_sort(a, 9);
			cout << "After sort, the array is:\n";
			print_array(a, 9);
			break;
		}
		case 3:
		{
			fill_array(a, 9);
			insert_sort(a, 9);
			cout << "After sort, the array is:\n";
			print_array(a, 9);
			break;
		}
		case 4:
		{
			fill_array(a, 9);
			bubble_sort(a, 9);
			cout << "After sort, the array is:\n";
			print_array(a, 9);
			break;
		}
		case 5:
		{
			cout << "Thank you for using the array functions\n";
			break;
		}
		default:
		{
			cout << "Wrong choice. Please choose from menu: ";
			break;
		}
		}
	} while (choice != 5);

	return 0;
}

/*Output

	***************************************************
	*                   Menu                          *
	*1. Linear Search                                 *
	*2. Selection Sort                                *
	*3. Insertion Sort                                *
	*4. Bubble Sort                                   *
	*5. Quit                                          *
	***************************************************
Enter your choice: 1
Enter 9 elements of array separated by a space or press enter after each:
1
5
6
18
123
234
256
589
1023
Enter the key you want to search: 18
The key 18 is #4 element in array

	***************************************************
	*                   Menu                          *
	*1. Linear Search                                 *
	*2. Selection Sort                                *
	*3. Insertion Sort                                *
	*4. Bubble Sort                                   *
	*5. Quit                                          *
	***************************************************
Enter your choice: 2
Enter 9 elements of array separated by a space or press enter after each:
1 2 3 4 5 6 10 12 13
After sort, the array is:
1 2 3 4 5 6 10 12 13
	***************************************************
	*                   Menu                          *
	*1. Linear Search                                 *
	*2. Selection Sort                                *
	*3. Insertion Sort                                *
	*4. Bubble Sort                                   *
	*5. Quit                                          *
	***************************************************
Enter your choice: 2
Enter 9 elements of array separated by a space or press enter after each:
1 5 9 10 7 3 2 25 50  21
After sort, the array is:
1 2 3 5 7 9 10 21 25
	***************************************************
	*                   Menu                          *
	*1. Linear Search                                 *
	*2. Selection Sort                                *
	*3. Insertion Sort                                *
	*4. Bubble Sort                                   *
	*5. Quit                                          *
	***************************************************
Enter your choice: 3
Enter 9 elements of array separated by a space or press enter after each:
1 10 2 20 3 40 5 15 21
After sort, the array is:
1 2 3 5 10 15 20 21 40
	***************************************************
	*                   Menu                          *
	*1. Linear Search                                 *
	*2. Selection Sort                                *
	*3. Insertion Sort                                *
	*4. Bubble Sort                                   *
	*5. Quit                                          *
	***************************************************
Enter your choice: 4
Enter 9 elements of array separated by a space or press enter after each:
8 1 45 2 99 5 74 120 3
After sort, the array is:
1 2 3 5 8 45 74 99 120
	***************************************************
	*                   Menu                          *
	*1. Linear Search                                 *
	*2. Selection Sort                                *
	*3. Insertion Sort                                *
	*4. Bubble Sort                                   *
	*5. Quit                                          *
	***************************************************
Enter your choice: 5
Thank you for using the array functions




*/
