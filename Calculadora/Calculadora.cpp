#include <iostream>
#include <string>

using namespace std;

void MenuCalculadora() {
	cout << '\n';
	cout << "OPERATIONS" << endl;
	cout << "1) +" << endl;
	cout << "2) -" << endl;
	cout << "3) x" << endl;
	cout << "4) /" << endl;
	cout << "5) %" << endl;
}
int main() {
	int option;
	while (true) {
		MenuCalculadora();
		cout << "Select an option: ";

		while (true) {
			if (cin >> option) {
				cout << '\n';
				break;
			}
			else {
				cout << '\n';
				cout << "Please, select the operation number.\n";
				cout << "Select an option: ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}

		switch (option) {
		case 1: {
			int firstNumber = 0;
			int secondNumber = 0;

			while (true) {
				cout << "Enter the first number that will be summed: ";
				if (cin >> firstNumber) {
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value.\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
			while (true) {
				cout << "Enter the second number: ";
				if (cin >> secondNumber) {
					cout << "Result: " << firstNumber + secondNumber << "\n";
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value. \n ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
		} break;

		case 2: {
			int firstNumber = 0;
			int secondNumber = 0;

			while (true) {
				cout << "Enter the first number: ";
				if (cin >> firstNumber) {
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value.\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
			while (true) {
				cout << "Enter the value that will be subtracted: ";
				if (cin >> secondNumber) {
					cout << "Result: " << firstNumber - secondNumber << "\n";
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value.\n ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
		} break;

		case 3: {
			int firstNumber = 0;
			int secondNumber = 0;

			while (true) {
				cout << "Enter the first number that will be multiplied: ";
				if (cin >> firstNumber) {
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value.\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
			while (true) {
				cout << "Enter the second number: ";
				if (cin >> secondNumber) {
					cout << "Result: " << firstNumber * secondNumber << "\n";
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value.\n ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
		} break;

		case 4: {
			int firstNumber = 0;
			int secondNumber = 0;

			while (true) {
				cout << "Enter the first number: ";
				if (cin >> firstNumber) {
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value.\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
			while (true) {
				cout << "What number will " << firstNumber << " be divided by? ";
				if (cin >> secondNumber) {
					cout << "Result: " << firstNumber / secondNumber << "\n";
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value.\n ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
		} break;

		case 5: {
			int firstNumber = 0;
			int secondNumber = 0;

			while (true) {
				cout << "The chosen operation calculates the rest of a division.\n";

				cout << "Enter the first number: ";
				if (cin >> firstNumber) {
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value.\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
			while (true) {
				cout << "What number will " << firstNumber << " be divided by? ";
				if (cin >> secondNumber) {
					cout << "Result: " << firstNumber % secondNumber << "\n";
					break;
				}
				else {
					cout << '\n';
					cout << "Please, enter a number value.\n ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
		} break;



		default: {
			break;
		}
		}
	}
	return 0;
}

