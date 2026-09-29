#include<iostream>
using namespace std;


//NOTE: "using namespace std" is perfectly fine while learning!
//Once your program nis complete, an AI or linter can clean it up quickly.

// -------------------------------------------------------------------
//NAMESPACES - Quick Overview:
//A namespace prevents naming conflicts in large projects by grouping identically
//named entities under different labels.
// -------------------------------------------------------------------

//Declare a namespace called "first" containing an int x = 1.
//CODE:
namespace first {

	int x = 1;
}

//Declare a namespace called "second" containing an int x = 2.
//CODE:
namespace second {

	int x = 2;
}

//Declare a namespace called "third" containing an int x = 3.
//CODE:
namespace third {

	int x = 3;
}

//Declare the main function.
//CODE:

int main() {

	//LOCAL vs GLOBAL:
	//The x values defined above live in their own namespaces (global scope).
	//The x below is a local variable - it only exists inside main().
	
	//Declare a local int variable x and initialize it to 0.
	//CODE:
	int x = 0;

	//Print the local x to the console.
	//CODE:
	cout << x << endl;

	//SCOPE RESOLUTION OPERATOR ( :: )
	//To access a variable from a specific namespace, prefix it like: namespace::variable
	//This tells the compiler to look outside main() in the named global namespace.
	 
	//Print x from the "first" and "second" namespaces using the :: operator.
	//CODE:
	cout << first::x << endl;
	cout << second::x << endl;

	//So entities can have the same name so long as their within a different namespace.

	//"using namespace" lets you drop the prefix for a specific namespace.
	//However, a local variable will always shadow a namespace variable!
	//Even though "third" is brought into scope below, the local x = 0 takes priority.
	//To explicitly access third::x, you still need the :: prefix UNLESS you comment or remove
	//out the local variable like this: // int x = 0;  <-- remove or comment this out
	//Bring "third" into scope with a using directive
	//CODE:
	using namespace third;

	cout << x << endl;//Prints 0 b-- local x shados third::x
	cout << third::x << endl;//Prints 3 -- explicit prefix bypass shadowing.

	//** This is exactly why prefixing with :: is safer and more predictable!

}