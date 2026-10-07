#include<iostream>
using namespace std;


int main() {

	//Arithmetic operators perform basic math calculations and return their result. (+ - * / %)
	// 
	// Declare 11 integer variables named studentsClass1 through studentsClass11,
	// each 8initialized to a value that by 5 from the previous one.
	//CODE:
	int studentsClass1 = 20;
	int studentsClass2 = 23;
	int studentsClass3 = 25;

	int studentsClass4 = 30;
	int studentsClass5 = 40;
	int studentsClass6 = 50;

	int studentsClass7 = 60;
	int studentsClass8 = 70;


	int studentsClass9 = 80;
	int studentsClass10 = 90;
	int studentsClass11 = 100;

	//Declare a dou8ble variable named studentsClass12 an initialize it to 100.
	//CODE:
	double studentsClass12 = 100;

	//Declare an int variable named remainder and intialize it to 99.
	int remainder = 99;

	//Reassign remainder to the result of studentsClass1 modulo 2.
	// The modulus operator (%) gives you the leftover value after division.
	//CODE:
	remainder = studentsClass1 % 2;

	//Print the value of remainder to the console.
	//Since 20 divides evenly by, the result will be 0.
	//CODE:
	cout << remainder << endl;

	//Now assign the remainder to expression students % 3.
	//CODE:
	remainder = students % 3;

	// Print the new remainder. Since 20/ 3 has a leftover of 2, this will output 2.
	//CODE:
	cout << remainder << endl;

	//Tip: Modulus with 2 is a handy way to check if a number is even or odd.
	//A remainder of 0 means even; a remainder of 1 means odd.
	//CODE:
	students = students + 1;

	//Reassign students to itself plus 1 using the standard addition expression. (20- + 1 = 21)
	//CODE:
	students += 1;

	//Increment studentsClass3 by 1 using the post-increment operator (++)
	//CODE:
	studentsClass3++;

	//Reassign studentClass4 to itself minus 2 using the standard subtraction expression. (30 - 2 = 28)
	//CODE:
	studentsClass4 = studentsClass4 - 2;

	//Reassign studentClass5 using the subtraction assignment shorthand (-=). (40 - 2 = 38)
	//CODE:
	studentsClass5 -= 2;

	//Decrement studentClass6 by 1 using the post-decrement operator (--). (50 - 1 = 49)
	//CODE:
	studentsClass6--;

	//Print the current values of students through studentsClass6, each on its own line.
	//CODE:
	cout << students << endl;
	cout << studentsClass2 << endl;
	cout << studentsClass3 << endl;

	cout << studentsClass4 << endl;
	cout << studentsClass5 << endl;
	cout << studentsClass6 << endl;

	//Reassign studentsClass7 to itself multiplied by 2 using the standard multiplication expression. (60 * 2 = 120)
	//CODE:
	studentsClass7 = studentsClass7 * 2;

	//Reassign studentsClass8 using the multiplication assign shorthand  (*=). (70 * 2 = 140)
	//CODE:
	studentsClass8 *= 2;

	//Print the updated values of studentClass7 and studentsClass8, each on its own line.
	//CODE:
	cout << studentsClass7 << endl;
	cout << studentsClass8 << endl;

	//Now practice division (/) using studentsClass9 through studentsClass12.

	//Reassign studentsClass9 to itself divided by 2. (80 / 2 = 40)
	//CODE:
	studentsClass9 = studentsClass9 / 2;

	//Reassign studentsClass10 using the division assignment shorthand (/=). (90 / 2 = 45)
	//CODE:
	studentsClass10 /= 2;

	//Reassign studentsClass11 to itself divided by 3.
	// Since this is an int, any decimal portion will be truncated. (100 / 3 = 33)
	//CODE:
	studentsClass11 = studentsClass11 / 3;

	//Reassign studentsClass12 to itself divided by 3. Since this is a double, the result will include
	// a decimal value. (100/3 = 33.333...)
	//CODE:
	studentsClass12 = studentsClass12 / 3;

	//Print the values of studentsClass9 through studentsClass12 on a single line, separated by spaces.
	//CODE:
	cout << studentsClass9 << " " << studentsClass10 << " " << studentsClass11 << " " << studentsClass12 << endl;


	//Arithmetic operators follow an order of operations know as PEDMAS:
	// Parentheses - > Multiplication -> Division -> Addition -> Subtractions.
	// 
	// Declare an int variable named people and assign it the result of this expression without any 
	//parentheses, letting the default order of operations apply.
	//CODE:
	int people = 6 - 5 + 4 * 3 / 2;

	//Declare a second int variable named people2 using the same expression, but add parentheses
	// to change the order of operations and observe the different result.
	// Being an int means any decimal in the result will be dropped.
	//CODE:
	int people2 = 6 - (5 + 4) * 3 / 2;

	//Print both people and people2 on separate lines to compare the two results.
	//CODE:
	cout << people << endl;

	cout << people2 << endl;
}
