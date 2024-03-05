#include <iostream>
#include <string>
using namespace std;

void helloWorld() {
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

int main(void) {
	//helloWorld();
	//WriteOutInt();
	//WriteOutFloat();
	//RepeatString();
	//Multiplyer();
	Calculator();
	return 0;
}
