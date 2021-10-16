/*
	Data type:
	1. int: integer
	2. float: decimal, single precision
	3. double: decimal, double precision
	4. char: character
	5. string: array of character
	6. bool: true/false
	
	Variable declaration
	e.g: 
	int a, b;
	int a = 10;
	const int 10;
	
	** Constant (const), is used to ensure a variable values
	does not change throughout the program. A constant variable.
*/
#include <iostream>
using namespace std;

int main() {

	const int a = 4;
	int x = 10, y;
	float i = 10.1;
	double b = 10.9;
	char k = 'A';
	string Name = "Arif";
	bool test = false;	

	y = 3;
	
	cout << "Enter value for Y: \n";
	//Prompt input from user
	cin >> y;
	//Display output with variable
	cout << "Value of Y: " << y << "\n";
	

  return 0;
}

