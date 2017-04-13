#include <iostream>
#include <stdio.h>      
#include <stdlib.h> 
#include "string"

using namespace std;

extern "C" bool IsValidAssembly(int a, int b);

// Write here the UO that you have used as ID: UO229908

//In CheckBits() you have to call InvalidLicense() if any of these conditions is true:
//
//- Bit 2 of the first number is not 1.
//- Bit 2 of the first number is not equal to bit 2 of the second number.
//- After composing a 32 - bit number taking the most significant 9 bits from the first number and the rest of the bits from the second number, the result is less than 900.
//
//CheckAssembly() must ask for a 32 - bit integer and it must pass this number to the function IsValidAssembly().As second parameter to this function, you must pass 2.
//
//The function IsValidAssembly() must be implemented in assembly in the file Assembly - code.asm.It must return an integer, which must be 1 if all the bits that are set to 1 in the second parameter are also set to 1 in the first parameter.Otherwise, it must return 0.
//
//CheckInlineAssembly() must ask for a 32 - bit integer and it must check, using inline assembly, that its bits 2 and 3 are equal.Otherwise, InvalidLicense() must be called.

string ID = "229908";

string InvalidLicense() {
	cout << " LICENSE IS NOT VALID";
	exit(EXIT_FAILURE);
}

string CheckPassword() {
	string password;
	cout << "Introduce your password: ";
	cin >> password;

	if (ID.compare(password) != 0)
		InvalidLicense;
	else
		printf("Password matches ID");


}


int CheckBits() {
	long num1, num2;

	//get the numbers
	cout << "Introduce the first number (32-bit): "; 
	cin >> num1;
	cout << "Introduce the second number (32-bit): ";
	cin >> num2;

	//transform the numbers into an array of ints formed by 0s and 1s for comparison
	int num1Binary[32] = ArraySplit(num1);
	int num2Binary[32] = ArraySplit(num2);
	
	//transform the ID into an array of ints for comparison
	//int IDToBinary[32] = StringToArray(ID);

	//auxiliary array, sum of most significant bits from first number + less significant from second number
	int sumArray[32];

	//Check conditions
	if (num1Binary[0] = !1) {
		InvalidLicense
	} else if (num1Binary[0] != num2Binary[0]) {
		InvalidLicense
	} else if ()
}


int main()
{

	return 0;
}


//--------------------Auxiliary methods--------------------------------------

//receives a number, returns its binary representation in an array
array<int,32> ArraySplit(long num) {

	//initialization of the array
	array<int, 3> a = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	
	//loop for obtaining the binary bits

	//return the array
	return a;

}

//receives an string, transforms it into a decimal int and then into binary
array<int, 32> StringToArray(string str) {
	long num = Long.parse(str);
	return ArraySplit(str);
}