// UnitTests.Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ShowMainMenu()
{
	cout << "I am the BubbleSort algorithm.\n Please select an option: \n";
	cout << "|P. Print - Defined Data (Array[int, int, int ..])\n";
	cout << "|S. Sort - Defined Data Array[int, int, int, ..])\n";
	cout << "|Y. Exit\n";
}

void Swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void BubbleSort(int arr[], int term)
{
	for (int i = 0; i < term; ++i) {
		for (int index = 0; index < term - i - 1; ++index) {
			if (arr[index] < arr[index + 1]) {
				int swap;
				swap = arr[index];
				arr[index] = arr[index + 1];
				arr[index + 1] = swap;
			}
		}
	}

	for (int counter = 0; counter < term; counter++) {
		cout << arr[counter] << endl;
	}
}


void PrintArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int definedArray[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(definedArray) / sizeof(definedArray[0]);

	ShowMainMenu();

	int yourchoice;
	string confirm;
	do
	{
		cout << "Enter your choice (1-3):";
		cin >> yourchoice;
		switch (yourchoice)
		{
		case 1: 
			PrintArray(definedArray, n); 
			break;
		case 2: 
			BubbleSort(definedArray, n); 
			break;
		default: cout << "invalid"; break;
		}
		cout << "Press y or Y to continue:";
		cin >> confirm;
	} while (confirm == "y" || confirm == "Y");

	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
