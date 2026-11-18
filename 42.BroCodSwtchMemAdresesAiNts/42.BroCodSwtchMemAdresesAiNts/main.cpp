#include <iostream>
using namespace std;



//A memory address is the location where the data is stored in RAM.
//Use the & (address-of) operator to access a var memory address.


int main() {

	string  name = "Bro"; //1 byte
	int age = 21; // bytes
	bool students = true; //1 byte
	//double/long: 8 bytes each

	//Display the memory address of all three vars using &
	//CODE:
	cout << &name << '\n';
	cout << &age << '\n';
	cout << &students << '\n';

}