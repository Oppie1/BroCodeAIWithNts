#include <iostream>
#include<vector>
using namespace std;


//Type Aliases (typedef and using) 
//Type aliases allow you to create alternate names for existing data types.
//This improves code readability and reduces the risk of typos, especially
//when working with complex types like vectors and pairs.
// 
//Modern C++ (C++11+) uses the 'using' keyword instead of 'typedef' because it's more
//readable and works better with template types.
// 
// Example of a complex type that benefits from aliasing:
// std::vector<std::pair<std::string, int>>pairlist_t
// Instead of writing this long type repeatedly, we create an alias for it.
// Create a type alias for std::string, then for int, then simplify std::cout/
//CODE:
using text_t = std::string;
using number_t = int;
using std::cout;

int main() {

	//Using Type Aliases for Cleaner Code.
	//Instead of writing std::string repeatedly, we use our text_t alias.
	//This makes declarations shorter and easier to read throughout the program.

	//Declare a string variable named firstName using the test_t alias.
	//CODE:
	text_t firstName = "Adam";

	//Declare an integer variable named age using the number_t alias.
	//CODE:
	number_t age = 21;

	//Ouput both first name and age to screen on differnet lines.
	//CODE:
	cout << firstName << endl;
	cout << age << endl;
	return 0;

}