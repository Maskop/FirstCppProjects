#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

#define inTheCaseOf if
#define otherwise else


void HelloWorld() {
	cout << "Hello World!" << endl;
	cin.get();
}

void WriteOutInt() {
	int a;
	a = 56;
	cout << a << endl;
	cin.get();
}

void WriteOutFloat() {
	float a;
	a = 56.6f;
	cout << a << endl;
	cin.get();
}

void RepeatString() {
	cout << "Ahoj, jsem virtualni papousek Lora, rad opakuji!" << endl;
	cout << "Napis neco: " << endl;
	string input;
	cin >> input;
	string output;
	output = input + "," + input + "!";
	cout << output << endl;
	cin.get(); cin.get();
}

void Multiplyer() {
	int a, b;
	cout << "Zadejte dve cisla: " << endl;
	cin >> a >> b;
	cout << "Vysledek je: " << a * b << endl;
	cin.get(); cin.get();
}

void Calculator() {
	float a, b;
	cout << "Enter two numbers(floating points) with a space." << endl;
	cin >> a >> b;
	float multiply = a * b;
	float divide = a / b;
	float add = a + b;
	float subtract = a - b;
	cout << "Multiply: " << multiply << endl;
	cout << "Divide: " << divide << endl;
	cout << "Add: " << add << endl;
	cout << "Subtract: " << subtract << endl;
	cin.get(); cin.get();
}

void Problem1() {
	unsigned int age;
	cout << "Zadej svuj vek: "; cin >> age;
	cout << "Je ti " << age << " let." << endl;
	cin.get(); cin.get();
}

void Problem2() {
	int inputNumber;
	cout << "Zadejte cislo: "; cin >> inputNumber;
	cout << "Druha mocnina je " << inputNumber * inputNumber << endl;
	cin.get(); cin.get();
}

void Problem3() {
	float pi = 3.1415f;
	float radius;
	cout << "Zadejte polomer: "; cin >> radius;
	cout << "Obvod kruhu je: " << 2 * pi * radius << " a jeho obsah je " << pi * radius * radius << "cm2" << endl;
	cin.get(); cin.get();
}

void Shenanigans() {
	int a = 5;
	int b = 6;
	inTheCaseOf(a > b)
		cout << "a is greater than b" << endl;
	otherwise
		cout << "b is greater than a" << endl;
	cin.get();
}

void CalculateSquareRoot() {
	double inputNumber, squareRootOfNum;
	cout << "Enter a number to calculate square root: "; cin >> inputNumber;
	inTheCaseOf(inputNumber < 0)
		cout << "Cannot calculate square root of a negative number." << endl;
	otherwise{
		squareRootOfNum = sqrt(inputNumber);
		cout << "Square root of " << inputNumber << " is " << squareRootOfNum << endl;
	}
	cin.get(); cin.get();
}

void CalculatorWithSwitch() {
	float a, b;
	cout << "Enter two numbers with a space: "; cin >> a >> b;
	char operation;
	bool repeat = true;
	while (repeat) {
		cout << "Choose an operation: " << endl
			<< "0 to exit" << endl
			<< "1 to Add" << endl
			<< "2 to Subtract" << endl
			<< "3 to Multiply" << endl
			<< "4 to Divide" << endl;
		cin >> operation;
		switch (operation)
		{
		case '0':
			cout << "Exiting..." << endl;
			repeat = false;
			break;
		case '1':
			cout << "Add: " << double(a + b) << endl;
			break;
		case '2':
			cout << "Subtract: " << double(a - b) << endl;
			break;
		case '3':
			cout << "Multiply: " << a * b << endl;
			break;
		case '4':
			cout << "Divide: " << a / b << endl;
			break;
		default:
			cout << "None of the choices selected!" << endl;
			break;
		}
		//system("cls");
		cout << "\n\n";
	}
}

void ArrayTestAndPointers() {
	int numbers[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 12 };
	random_shuffle(begin(numbers), end(numbers));
	int c = count(begin(numbers), end(numbers), 7);
	cout << "Number of 7s in the array: " << c << endl;
	int *max = max_element(begin(numbers), end(numbers));
	cout << "Max number in the array: " << *max << endl;
	cout << numbers + 6 << endl;
	cout << "what is max? " << max << endl;
	sort(begin(numbers), end(numbers));
	for (int i = 0; i < 12; i++) {
		cout << numbers[i] << " ";
	}
	cin.get();
}

void GimmiLineMotherfucker() {
	string input;
	cout << "Enter your name: "; getline(cin, input);
	cout << "Hi " << input;
	cin.get();
}

void CesarsCode() {
	string text;
	int shiftBy;
	cout << "Input text, that you want to convert: ";
	getline(cin, text);
	do {
		cout << "Enter a number between -26 and 26: ";
		cin >> shiftBy;
	} while ((shiftBy < -26) || (shiftBy > 26));

	for (int i = text.length(); i >= 0; i--) {
		cout << (int)(text[i] + shiftBy) << ' ';
		if (text[i] != ' ') {
			text[i] = text[i] + shiftBy;
		}
	}
	cout << endl << text << endl;
	cin.get();
}

void CesarsCodeV2() {
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string text;
	int shiftBy;
	cout << "Input text, that you want to convert: ";
	getline(cin, text);
	do {
		cout << "Enter a number between -26 and 26: ";
		cin >> shiftBy;
	} while ((shiftBy < -26) || (shiftBy > 26));

	for (int i = text.length(); i >= 0; i--) {
		cout << (int)(text[i] + shiftBy) << ' ';
		if (text[i] != ' ') {
			text[i] = tolower(text[i]);
			int position = alphabet.find(text[i]);
			if (position + shiftBy > 25) {
				position = position + shiftBy - 26;
			}
			else if (position + shiftBy < 0) {
				position = position + shiftBy + 26;
			}
			else {
				position = position + shiftBy;
			}
			text[i] = alphabet[position];
		}
	}
	cout << endl << text << endl;
	cin.get();
}

int main(void) {
	//helloWorld();
	//WriteOutInt();
	//WriteOutFloat();
	//RepeatString();
	//Multiplyer();
	//Calculator();
	//Problem1();
	//Problem2();
	//Problem3();
	//Shenanigans();
	//CalculateSquareRoot();
	//CalculatorWithSwitch();
	//ArrayTestAndPointers();
	//GimmiLineMotherfucker();
	//CesarsCode();
	CesarsCodeV2();
	return 0;
}
