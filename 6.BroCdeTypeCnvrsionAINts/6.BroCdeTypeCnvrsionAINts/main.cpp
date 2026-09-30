#include <iostream>
using namespace std;



int main() {

	//Type conversion = changing a value from one data type to another.
	// Implicit = happens automatically by the compiler. 
	// Explicit = you manually specify the target data type in front of the value, e.g. (int).
	// 
	// The examples below demonstrate implicit (automatic) type conversions.
	// Declare an int variable x and assign it the value 3.14. Then declare another variable y
	// but this time make it a double.
	//CODE:
	int x = 3.14;

	double y = 3.14;

	//Here we explicitly cast 3.14 to an int (dropping the decimal), then store the result in a double z.
	//Declare a double variable z and explicitly cast 3.14 to an int before assigning it.
	//CODE:
	double z = (int)3.14;

	//Declare a char variable a and assign it an integer value.
	//CODE:
	char a = 100;

	//Print each of the variables declared above to the console
	//CODE:
	cout << x << endl;// x is an int, so the decimal from 3.14 was truncated when it was assigned.
	cout << y << endl;//y is a double, so the decimnal is preserved.

	cout << a << endl;//The integer 100 is implicitly converted to its ASCII character equivalent.
	//According to the ASCII table, 100 maps to the letter 'd'

	//Explicitly cast the integer 100 to a char and print it - this should also output the letter 'd'.
	//CODE:
	cout << (char)100 << endl;


	//Now write a small program that calculates a student's test score as a percentage.
	// Declare an int variable correct to hold the number of right answers and set it to 8.
	//CODE:
	int correct = 8;

	//Declare an int variable questions to hold the total number of questions and set it to 10.
	//CODE:
	int questions = 10;

	//Declare a double variable score1 and assign it the result of (correct / questions * 100).
	//CODE:
	double score1 = correct / questions * 100;

	//Declare a double variable score2 and calculate the same expression, but this time explicitly cast
	//questions to a double so the decimal is not lost during division.
	//CODE:
	double score2 = correct / (double)questions * 100;

	//Because double variable score2 and calculate the same expression, but this time explicitly
	//cast questions to a double so the decimal is not lost during division.

	//Print both scores to the screen.
	//CODE:
	cout << "Your score is: " << score1 << "%" << endl;
	cout << "Your score is: " << score2 << "%" << endl;

	return 0;

}