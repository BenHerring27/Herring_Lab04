#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	cout << "Factorial: " << endl;
	int x;
	cout << "Enter a number: ";
	cin >> x;
	while (x < 0) {
		cout << "Nice try, please enter a positive number...: ";
		cin >> x;
	}
	int factorial = 1;
	cout << x << "! = ";
	for (int i = 1; i <= x; i++) {
		factorial *= i;
		cout << i;
		if (i < x) {
			cout << " * ";
		}
	}
	cout << " = " << factorial << endl;
	
	
	
}
void arithmetic() {
	cout << "Arithmetic Series: " << endl;
	int start;
	cout << "Enter a number to start at: ";
	cin >> start;
	int diff;
	cout << "Enter a number to add each time: ";
	cin >> diff;
	int num;
	cout << "Enter the number of elements in the series: ";
	cin >> num;
	while (num < 0) {
		cout << "Nice try, please enter a positive number...: ";
		cin >> num;
	}
	int i = 0;
	int sum = 0;
	while (i < num) {
		sum += start;
		cout << start;
		if (i < (num - 1)) {
			cout << " + ";
		}
		start += diff;
		i++;
	}
	cout << " = " << sum << endl;
}
void geometric() {
	cout << "Geometric Series: " << endl;
	int start;
	cout << "Enter a number to start at: ";
	cin >> start;
	int mult;
	cout << "Enter a number to multiply by each time: ";
	cin >> mult;
	int num;
	cout << "Enter the number of elements in the series: ";
	cin >> num;
	while (num < 0) {
		cout << "Nice try, please enter a positive number...: ";
		cin >> num;
	}
	int i = 0;
	int sum = 0;
	while (i < num) {
		sum += start;
		cout << start;
		if (i < (num - 1)) {
			cout << " + ";
		}
		start *= mult;
		i++;
	}
	cout << " = " << sum << endl;

}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}