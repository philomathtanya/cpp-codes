#include <bits/stdc++.h>
using namespace std;

void kLarge(int array[], int size, int k)

{

	// Sorting given array in reverse order 

	sort(array, array + size, greater<int> ());

	// Printing first kth largest elements 

	for (int i = 0; i < k; i++)

		cout << array[i] << " ";

}

// driver program 

int main()

{

	int array[] = { 12, 20, 14, 26, 30, 1, 70, 56 };

	int size = sizeof(array) / sizeof(array[0]);

	int k = 4;

	kLarge(array, size, k);

}
