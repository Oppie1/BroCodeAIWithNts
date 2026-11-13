#include <iostream>
using namespace std;


int main() {

	//Create an array of strings named "questions" that will store all your quiz questions. This array
	// should contain 4 questions about Adam (his last name, birth year, birthplace and whether Earth is flat).
	// Each string should be a complete question with options indicated. Hint: [] {"" ""}
	//CODE:
	string questions[] = { "1. What is Adam's last name?: ",
							"2. What year was Adam Born?: ",
							"3. Where was Adam born?",
							"4. Is the Earth flat?"
	};
	
	//Create a 2D{[][] array of strings named "options" that stores all answer choices for each question. The
	// array should have 4 rows (one for each question) and 4 columns (one for each answer choice A-D)
	//Each element should contain a string with the answer options separated by commas ({A. answer2,
	// B. Answer2 -> each array row is {   } with 4 answers that fit in column.
	//CODE:
	string options[][4] =
	{ {"A. Ferguson,B. Paul,C. Tindall,D. Villa"},
		{"A.1979, B.1983, C.1990, D.1333"},
		{"A. Chicago,B. LA,C. Dallas, D. Green Bay"},
		{ "A. Yes, B. No, C. Sometimes, DE. What's Earth?" }
	};

	//Create a character array named "answerKey" that stores the correct answer for each question. This 
	// should contain 4 characters: 'C', 'B','A' -> Just match order of array above answers. These are
	//the answers students should match their guess against.
	//For the answer key use a char variable array "answerKey" -> {     }
	//CODE:
	char answerKey[] = { 'C', 'B', 'D','C' };
	
	//Create three variables:
	// 1. int "size" calculate the total number of questions by dividing the size of the questions array by the 
	// size of one element.
	// 2. "guess" - A uninintialized char var to store the user's answer choice (A-D)
	//3. "score" - An int var initialized to 0 to keep track of how many questions the student answers correctly.
	//CODE:
	int size = sizeof(questions) / sizeof(questions[0]);
	char guess;
	int score = 0;

	//Create a for loop that iterates through each question using the "size" variable. The loop should start
	//at 0 and continue while i is less than size, incrementing by i each time.
	// All the quiz logic will happen inside this loop(outer for loop, nested for loop and if/else statement within
	//CODE:
	for (int i = 0; i < size; i++) {

		cout << "************************************\n";
	//Display the current questions to the student using the "questions" array and the loop var "i" as the index.
	//CODE:
		cout << questions[i] << '\n';
		cout << "************************************\n";

		//Create a nested for loop that iterates through each answer option (A-D) for the current question.
		//Use j as your loop var starting at 0 and incrementing until you've displayed all 4 options.
		// Inside the loop, display each option from the options[i][j] array
		//CODE:
		for (int j = 0; j < sizeof(options[j]) / sizeof(options[j][0]); j++) {

			cout << options[i][j];

		}

		//Output a new line, then use cin to get the student's guess and store it in the "guess" var.
		// Convert the guess to uppercase using the toupper() function to handle both lowercase and uppercase input
		//CODE:
		cout << endl;
		cin >> guess;
		guess = toupper(guess);

		//Use an if statement to check if the student's "guess" matches the correct answer in "answerKey[i]"
		//If it matches, display "Correct" and increment the "score" var by 1.
		//CODE:
		if (guess == answerKey[i]) {

			cout << "Correct\n";

			score++;
		}

		//Create an else statement that executes if the student's guess is wrong. Display "Wrong" and show the
		//correct answer by accessing answerKey[i]/
		//CODE:
		else {

			cout << "Wrong\n";
			cout << "Answer: " << answerKey[i] << '\n';
		}

		cout << "************************************\n";
		cout << "*              Results              *\n";
		cout << "************************************\n";

		//After each question, display the quiz results so far using cout. 
		//- Show the number of correct guesses (use the "score" variable)
		//- Show the total number of questions (use the "size" variable)
		//- Calculate and display the percentage score by dividing score by size (case to double), 
		// multiply by 100, and add "%" symbol.
		//CODE:
		cout << "Correct Guesses: " << score << '\n';
		cout << "# of questions: " << size << '\n';
		cout << "Score: " << (score / (double)size) * 100 << "%";

	}

}
