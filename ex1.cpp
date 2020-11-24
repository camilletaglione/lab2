// Calculator
#include <iostream>
using namespace std;
float Add(float a, float b){
	return a + b;}

float Subtract(float c, float d){
	return c - d;}

float Multiply(float e, float f){
	return e * f;}

float Divide(float g, float h){
	return g / h;}

float Modulus(int i, int j){
	return i % j;}

void Menu(){
	cout << "MENU" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;}

int main(){
	int k = 0;
	float nb1 = 0.0, nb2 = 0.0;
	char press_key;

	Menu();

	while (true)
	{
		cout << "Select the operation you want to do" << endl;
		cin >> k;
		cin.clear();
		if (k > 5 || k < 1){
			cout << "No operation available. Please select a number beetween 1-5";
			continue;}
		cout << "Select 2 numbers to operate" << endl;
		cin >> nb1 >> nb2;
		cin.clear();

		switch (k){
		case 1:
			cout << Add(nb1, nb2) << endl;
			break;
		case 2:
			cout << Subtract(nb1, nb2) << endl;
			break;
		case 3:
			cout << Multiply(nb1, nb2) << endl;
			break;
		case 4:
			cout << Divide(nb1, nb2) << endl;
			break;
		case 5:
			cout << Modulus(nb1, nb2) << endl;
			break;}
		cout << "Do you want to do another operation? If yes, press y" << endl;
		cin >> press_key;
		cin.clear();
		if (press_key == 'y')
			;
		else
			break;

	}

}
