#include <iostream>
#include <stdio.h>      
#include <stdlib.h> 

using namespace std;

extern "C" bool IsValidAssembly(int a, int b);

// Write here the UO that you have used as ID: uo237334

string ID = "237334";

string InvalidLicense() {
	cout << " LICENSE IS NOT VALID";
	exit(EXIT_FAILURE);
}
string CheckPassword(string password) {
	if (ID.compare(password) != 0)
		InvalidLicense;
	else
		printf("Password matches ID");


}
int CheckBits(int num1,int num2) {

}


int main()
{

	return 0;
}
