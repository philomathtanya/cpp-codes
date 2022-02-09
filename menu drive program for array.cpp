// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to display all the menu in
// the current program
void menu()
{
	cout << "\n\t\tMENU :";
	cout << "\nPress 1 to print even "
		<< "valued elements\n";
	cout << "Press 2 to print odd valued"
		<< " elements\n";
	cout << "Press 3 to calculate sum "
		<< "and average of elements in "
		<< "the array\n";
	cout << "Press 4 to print maximum"
		<< " and minimum element "
			"in the array\n";
	cout << "Press 5 to remove the "
		<< "duplicacy in array \n";
	cout << "Press 6 to print array"
		<< " in reverse\n";
	cout << "Press 7 to exit\n";
}

// Function to print even valued
// elements in the array arr[]
void even(int arr[], int len)
{
	cout << "Even numbers in the "
		<< "array are - ";
	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << "\t";
		}
	}
}

// Function to print odd valued
// elements in the array arr[]
void odd(int arr[], int len)
{
	cout << "Odd numbers in the "
		<< "array are - ";
	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 != 0) {
			cout << arr[i] << "\t";
		}
	}
}

// Function to print sum and the
// average of elements in array
void SumAverage(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}
	cout << "\n Sum	 =" << sum;
	cout << "\n Average =" << sum / len;
}

// Function to print maximum and
// minimum elements in an array
void MaxMin(int arr[], int len)
{
	int max = arr[1], min = arr[0];

	// Traverse the array
	for (int i = 0; i < len; i++) {

		// Update the maximum
		if (arr[i] > max)
			max = arr[i];

		// Update the minimum
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "Maximum = " << max
		<< "\t";
	cout << "Minimum = " << min;
}

// Function to remove duplicate
// elements in an array
void RmDuplicacy(int arr[], int n)
{
	if (n == 0 || n == 1)
		cout << "No Duplicates";

	// sorting array using inbuilt
	// sort() function
	sort(arr, arr + n);
	int temp[n];

	// Start traversing elements
	int j = 0;
	for (int i = 0; i < n - 1; i++)

		// If current element is not
		// the same as the next element
		// then store the current element
		if (arr[i] != arr[i + 1])
			temp[j++] = arr[i];

	// Store the last element as whether
	// it is unique or repeated, it hasn't
	// stored previously
	temp[j++] = arr[n - 1];

	// Modify original array
	for (int i = 0; i < j; i++)
		arr[i] = temp[i];

	// j is now the size of the array
	// without duplicates
	for (int i = 0; i < j; i++) {
		cout << arr[i] << " ";
	}
}

// Function to print array
// in reverse order
void Reverse(int arr[], int len)
{
	cout << "\nArray in reverse"
		<< " order:\n ";
	for (int i = len - 1; i >= 0; i--) {
		cout << arr[i] << "\t";
	}
}

// Driver Code
int main()
{
	int arr[100], i, num, choice;
	printf("Enter the size of "
		"an array :\n");

	cin >> num;
	printf("Enter the elements of "
		"the array :\n");

	for (i = 0; i < num; i++) {
		cin >> arr[i];
	}

	do {
		cout << "\n";
		menu();
		cout << "\nEnter your "
			<< "choice:\n ";
		cin >> choice;

		switch (choice) {
		case 1:
			even(arr, num);
			break;
		case 2:
			odd(arr, num);
			break;
		case 3:
			SumAverage(arr, num);
			break;
		case 4:
			MaxMin(arr, num);
			break;
		case 5:
			RmDuplicacy(arr, num);
			break;
		case 6:
			Reverse(arr, num);
			break;
		case 7:
			exit(0);
			break;
		default:
			cout << "INVALID CHOICE :-(";
		}

	} while (choice != 7);

	return 0;
}
