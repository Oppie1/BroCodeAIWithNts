#include<iostream>
using namespace std;


int main() {

	//sizeof() = determines the size in bytes oif a: variable, data type, class, objects, ect.

	//The sizeof(operator) is a fundamental C++ tool that allows you to determine how much memory
		//(inbytes) is occupied by variables, data types, arrays, and other objects. This is essential for
		//understatning memory management and data structure efficiency.

		//Primitive datra type declarations

		//A string var stores text. Declare a string var called name and initialize it with the text "Bro code"
		//Note: When you apply sizeof() to a string, you're getting the size of the string object itself 
		//(which stores a reference to the text), not the length of the text. This size remains constant
		//regardless of content.
		//CODE:
	string name = "Bro Code";

	//A double variable stores floating-point numbers. Declare a double var named gpa and initialize
	//it with a numeric value like 2.5.
	//CODE:
	double gpa = 2.5;

	//A boolean var stores true or false. Declare a bool var named student and initialize to true.
	//CODE:
	bool student = true;

	//Array declarations

	//Character arrays store multiple single characters in consecutive memory locations.
	//Declare a char array named grades without specifying its size, initialize it with  5 letter grades.
	//Since each char is 1 byte, this array will occupy 5 bytes total.
	char grades[] = { 'A', 'B', 'C', 'D','F' };

	//Declare another char array named grades2 with no size and initialize the same 5 letter grades as before.
	//CODE:
	char grades2[] = { 'A', 'B', 'C', 'D','F' };

	//String arrays store multiple string object. Declare two string arrays named students and students2,
	//each without specifying size, and initialize both with the same 4 student names: "SpongeBob", "Patrick"
	//"Squidward, and "Sandy".
	//CODE:
	string students[] = { "SpongeBob", "Patrick", "Squidward", "Sandy" };
	string students2[] = { "SpongeBob", "Patrick", "Squidward", "Sandy" };

	//Exploring sizeof() with primitive types.

	//When you apply sizeof() to a double var like gpa, you're asking how many bytes it uses
	//in memory. Print the size of the gpa var followed by " bytes".
	//CODE:
	cout << sizeof(gpa) << " bytes\n";

	//Every double in C++ occupies the same amount of memory. Confirm this by printing the size of the 
	//double data type itself.
	//CODE:
	cout << sizeof(double) << " bytes\n";

	//Strings behave differently from primitive types. Print the size of the name variable. You'll notice
	//it's much larger than the text it contains because it's storing a reference to the text location in 
	//memory, not the text itself. This size remains constant even if you change the string content.
	//CODE:
	cout << sizeof(name) << " bytes\n";

	//A single character is one of the smallest data types. Print the size of your grade var.
	//CODE:
	cout << sizeof(grades) << " bytes\n";

	//Confirm that all char data types occupy the same amount of memory by printing the size of the char
	//data type itself.
	cout << sizeof(char) << " bytes\n";

	//Boolean values (true or false) also require memory to store. Print the size of student variable to see
	//how many bytes a boolean uses. 
	//CODE:
	cout << sizeof(student) << " bytes\n";

	//Verify this result by printing the size of the bool data type itself.
	//CODE:
	cout << sizeof(bool) << " bytes";

	//Exploring sizeof() with arrays

	//Arrays store multiple elements consecutively in memory. To find the total memory used by the 
	//grades array, print the size of the entire array.
	//CODE:
	cout << sizeof(grades) << " bytes\n";

	//To determine how many elements are in an array, you divide the total array size by the size of one
	//element. This works because all elements are stored consecutively. Calculate and print the number
	//of elements in the grades array. You should get 5 elements
	//CODE:
	cout << sizeof(grades) / sizeof(grades[0]) << " elements\n" << endl;

	//Do the same calculation but grades2 array and sizeof() with char arg to confirm it also has 5 elements.
	//CODE:
	cout << sizeof(grades) / sizeof(char) << " elements" << endl;

	//For string arrays, the logic is identical but you divide by the size of one string element instead
	//of one char. Calculate and print the number of elements in the students array. You should get 4 elements..
	//CODE:
	cout << sizeof(students) / sizeof(students[0]) << " elements\n";

	//Finally, calculate and print the number of elements in the students2 array using same method.
	//CODE:
	cout << sizeof(students2)/sizeof(students2[0]) << " elements" << endl;

	return 0;
}
