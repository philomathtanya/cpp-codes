#include<iostream>

using namespace std;


int main()
{
	int size;
	int amount;
	int amountSmall;
	int amountMedium;
	int amountLarge;
	double SMALL = 1.75;
	double MEDIUM = 1.90;
	double LARGE = 2.0;
	double customerTotal;
	int SMALLOZ = 9;
	int MEDIUMOZ = 12;
	int LARGEOZ = 15;
	int totalCupsSold;
	double amountSold = 0.0;
	double moneyEarned = 0.0;
	int choice;

	
		cin >> choice;
		cout << endl;

		cout << "Please make a selection: \n"
			"1. Sell a coffee \n"
			"2. Total number of cups sold today \n"
			"3. Total amount of coffee sold today \n"
			"4. Total money made today \n"
			"5. Tutorial \n";
		cin >> choice;

		if (choice = 1)
		{
			cout << "Enter the amount of small coffees: ";
			cin >> amountSmall = amountSmall + SMALL;
			cout << "Enter the amount of medium coffees: ";
			cin >> amountMedium = amountMedium + MEDIUM;
			cout << "Enter the amount of large coffees: ";
			cin >> amountLarge = amountLarge + LARGE;
			cin >> customerTotal = amountSmall + amountMedium + amountLarge;
		}

		else if (choice = 2)
		{
			cin >> totalCupsSold = SMALL + MEDIUM + LARGE;
			cout << "The total number of cups sold today are: " << totalCupsSold;
		}

		else if (choice = 3)
		{
			cin >> amountSold = (SMALL * SMALLOZ) + (MEDIUM * MEDIUMOZ) + (LARGE * LARGE OZ);
			cout << "The total amount of coffee sold is " << amountSold << "oz.";
		}

		else if (choice = 4)
		{
			cin >> moneyEarned = customerTotal;
			cout << "Total amount earned today is: $";
		}

		else if (choice = 5)
		{
			cout << "Tutorial: \n Select an option from the start menu. Enter the numerical value into the computer. Follow the on screen directions and exit when done."
		}

		else 
		{
			cout << "Error. That option is not avalible.";
			return 0;
		}

	system("pause");
	return 0;
}
