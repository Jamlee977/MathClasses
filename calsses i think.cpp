#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

class math {
public:
	double num1[100];
	double num2[100];
};

double readVariables(class math Math[]) {
	int i, Size;
	cout << "Enter the number of times you want to do an operation: ";
	cin >> Size;
	for (i = 0; i < Size; i++) {
		cout << "\nEnter a number to the operation: ";
		cin >> Math[i].num1[i];
		cout << "\nEnter a number to the operation: ";
		cin >> Math[i].num2[i];
	}
	return Size;
}

double Add(class math Math[50], int term) {
	int j;
	double sum = 0;
	for (j = 0; j < term; j++) {
		sum += Math[j].num1[j] + Math[j].num2[j];
	}
	return sum;
}

double Sub(class math Math[50], int term) {
	int j;
	double sum = 0;
	for (j = 0; j < term; j++) {
		sum -= Math[j].num1[j] - Math[j].num2[j];
	}
	return sum;
}

double Mul(class math Math[50], int term) {
	int j;
	double sum = 1;
	for (j = 0; j < term; j++) {
		sum *= Math[j].num1[j] * Math[j].num2[j];
	}
	return sum;
}

double Div(class math Math[50], int term) {
	int j;
	double sum = 1;
	for (j = 0; j < term; j++) {
		sum /= Math[j].num1[j] / Math[j].num2[j];
	}
	return sum;
}

int main() {

	int n1;
	class math Math[100];
	char operation;

	n1 = readVariables(Math);
Calculator:
	cout << endl << endl << endl;
	cout << "Enter the operator: ";
	cin >> operation;
	if (operation == '+')
		cout << "The Addition of these numbers are: " << Add(Math, n1);
	else if (operation == '-')
		cout << "The Subtraction of these numbers are: " << Sub(Math, n1);
	else if (operation == '*')
		cout << "The Multiplication of these numbers are: " << Mul(Math, n1);
	else if (operation == '/')
		cout << "The Division of these numbers are: " << Div(Math, n1);
	else {
		cout << "Invalid operator.\n\n";
		goto Calculator;
	}
}