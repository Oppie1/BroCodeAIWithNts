#include<iostream>
using namespace std;



//Function prototypes allow us to declare functions before defining them. This tells the compiler that these
//funcs exist and will be defined later. printNum2 is a void function (returns nothing) that accepts one int parameter.
//CODE:
void printNum2(int myNum2);

//printNum3 is a void func that accepts one int parameter. Notice how each function has its own parameter name -
// these are local to each function.
//CODE:
void  printNum3(int myNum3);

int main() {

	//Understanding variable scope:
	//Local vars are declared inside a func or block { }
	//Global variables are declared outside all functions, accessible everywhere.

	//Create an int var named myNum and set it equal to 1. This var only exists within main() - 
	// it's local to this func
	//CODE:
	int myNum = 1;

	//Display myNum to the screen using cout.
	//This will output 1.
	//CODE:
	cout << "myNum is equal to: " << myNum << endl;

	//Now we call printNum2, passing myNum as an argument. Important: When we pass myNum to print2, the func
	//receives a COPY of its value. Inside printNum2, this value will be assigned to the parameter myNum2. Notice 
	//that printNum2 doesn't use myNum directly - it uses myNum2 (its own parameter).
	//Each function has its own separate variable scope.
	//CODE:
	printNum2(myNum);

	//Similarly, call printNum3 and pass myNum as its argument. The same principle applies: myNum's value is copied 
	//and becomes myNum3 inside printNum3. myNum3 is a local variable to the printNum3 function only. After the func
	//executes, control returns to this line in main().
	//CODE:
	printNum3(myNum);

}

//Define printNum2 with the int parameter myNum2. When this func is called from main, myNum2 receives a copy of the
//value that was passed. Inside this function's scope, create a new local int var myNumA and set it to 3.
// Then output myNumA to the screen.
// Note: myNumA is local to printNum2 only - it doesn't exist in main().
//CODE:
void printNum2(int myNum2) {

	int myNumA = 3;

	cout << "My numA is: " << myNumA << endl;


}

//Define printNum3 with the int parameter myNum3. Like print Num2, myNum3 is a parameter that acts as a local var
//var within this function. Create a new local int variable myNumB and set it to 7.
// Then output myNumB to the screen. Remember: myNumB only exists within this function. It's not accessible from main()
// or printNum2().l After this function executes, control returns to the caller (main)dds
//CODE:

void printNum3(int myNum3) {

	int myNumB = 7;

	cout << "My numB is: " << myNumB << endl;

}
