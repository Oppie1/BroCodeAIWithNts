#include <iostream>
#include <cmath>
using namespace std;



int main()
{

	//Create 8 double variables named a through i. Initialize 2 of them with whole
	// numbers, leave 3 uninitialized, and set the remaining 2 to decimal values.
	//CODE:

	double a;
	double b;
	double z;
	double c = 3.14;
	double d = 3.14;
	double e = 3.99;
	double f = 3;
	double g = 4;

	//Store the result of max() in variable z by passing f and g as arguments.
	// The max functions evaluate both parameters and returns the greater value.
	//CODE:
	z = max(f, g);

	//Display the value stored in z on the screen to confirm which number is greater.
	//CODE:
	cout << z << endl;//

	//Use the min() function with f and g as arguments and save the result to var z.
	//CODE:
	z = min(f, g);//

	//Print the contents of z to show which value is smaller.
	//CODE:
	cout << z << endl;

	//The cmath library provides access to the pow() function. Use pow() to calculate
	//2 raised to the power of 4, then store this result in variable g.
	//CODE:
	g = pow(2, 4);

	//Perform the same operation to find 2 to the power of 3 using pow() and store it in var f.
	//CODE:
	f = pow(2, 3);

	//Print both f and g to the screen.
	//CODE:
	cout << f << endl;
	cout << g << endl;

	//Apply the squrt() function with 9 as the argument and store the result in a variable.
	//CODE:
	a = sqrt(9);
	
	//Display the value of a on the screen.
	//CODE:
	cout << a << endl;

	//Apply the abs()function to-7 to demonstrate how it computes the absolute value.
	//Store this result in variable b and then display it to the screen
	b = abs(-7);//The abs function converts negative numbers to positive by removing the sign

	//CODE:Print b to the screen.
	cout << b << endl;

	//Apply round() function to variable c to obtain its nearest whole number representation
	// The round function adjusts decimal values to the closest integer, either up or down.
	//CODE:
	c = round(c);
	
	//Display the rounded value to the screen.
	//CODE:
	cout << c << endl;

	//Use the ceil() function on variable d to round it upward to the nearest whole number.
	// The ceil() function always rounds up regardless of the decimal value.
	//CODE:
	d = ceil(d);

	//Print d to the screen.
	//CODE:
	cout << d << endl;

	//Apply the floor() function to variable e to round it downward to the nearest whole number.
	//The floor function always rounds down regardless of the decimal value. e = floor(e);
	e = floor(e);//The floor function always rounds down to the nearest whole number.
	cout << e << endl;

	return 0;
}

//Reference guide for  cmath library functions
//https://www.cplusplus.com/reference/math/
//You can research other C++ libraries using same approach to discover available utility functions