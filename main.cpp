// Created by: Archel Taneka
// ID: 2001585556
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

// global variables
const int NUM_CHAR = 1000;
char charArr[NUM_CHAR]; // character array
char answer; // for input Y or N
int inputLevel; // for choosing the level

int rowSpaces; // determine how many enters
int rowSpacesLimit; // limits the enter

clock_t start; // timer variable
double duration; // difference between 2 timer

struct results{
	double wpm; // calculating words per minute
	int words; // count how many words from the sample text
};

// declares structure with variable
results result;

// declares function prototypes
void getUserLevel();
void displayCode();
double getTypeUser(double);

int main(){
	
	// print welcome message and tell user what the program does
	cout << "\t-------------------------------- \n";
	cout << "\t------CODE-TYPE EXERCISE-------- \n";
	cout << "\t-------------------------------- \n";
	cout << endl;
	cout << endl;
	
	cout << "Welcome to CODE-TYPE EXERCISE! \n";
	cout << "Objective: Type a sample code as fast as you can with minimum mistakes! \n";
	cout << endl;
	
	// calls the function
	getUserLevel();
	displayCode();
	
}

// declares getUserLevel function
void getUserLevel()
{
	int inputLevel;
	
	// print difficulties available
	cout << "Difficulties available: \n";
	cout << "1. Newbie - RECOMMENDED for beginners who has just started coding. \n";
	cout << "2. Veteran - Finally got the hang of it? \n";
	cout << "3. Master - More challenging stuff??? \n";
	cout << "4. Quit \n";
	cout << endl;

}

// declares displayCode function
void displayCode()
{		
	// get prompt from the user
	cout << "Choose your difficulty(Enter 1 - 3): ";
	cin >> inputLevel;
	
	switch(inputLevel)
	{
		case 1:
			
			result.words = 12; // set the result.word
			rowSpacesLimit = 7; // set the spaces limit
			
			// print info
			cout << "This level is RECOMMENDED for beginner \n";
			cout << "Target: \n";
			cout << "Time to finish the code: 15 seconds \n";
			cout << "WPM(Words Per Minute): 0.8 WPM \n";
			cout << endl;
			
			// ask the user to input 'Y' answer to continue
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n";
				cout << "using namespace std;\n";
				cout << endl;
				cout << "int main(){ \n";
				cout << "cout << \"hello world!\"; \n";
				cout << "} \n";
				cout << endl;
				cout << "Type your code here: \n";
				
				// calls the getTypeUser function
				getTypeUser(result.words);
				
			}
			break;
		
		case 2:
			// set the result.word
			result.words = 52;
			rowSpacesLimit = 17; // set the spaces limit
			
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n"
				 << "using namespace std; \n"
				 << "int main(){ \n"
				 << endl
				 << "int num1; \n"
				 << "int num2; \n"
				 << "int total; \n"
				 << endl
				 << "cout << \"input the first number: \";\n"
				 << "cin >> num1; \n"
				 << "cout << \"input the second number: \";\n"
				 << "cin >> num2; \n"
				 << endl
				 << "total = num1 + num2; \n"
				 << "cout << \"The total sum of the two number is:\" << total; \n"
				 << "}";
				cout << endl;
				cout << "Type your code here: ";
				cout << endl;
				
				// calls the getTypeUser function
				getTypeUser(result.words);
				
			}
			break;
		
		case 3:
			// set the result.word
			result.words = 61;
			rowSpacesLimit = 22; // set the spaces limit
			
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n"
				 << "using namespace std; \n"
				 << endl
				 << "int main(){\n"
				 << "int columnSpaces; \n"
				 << "int rowSpaces; \n"
				 << "int dotsIncrement; \n"
				 << "int dots = 1; \n"
				 << endl
				 << "for(columnSpaces = 1; columnSpaces <= 5; columnSpaces++) \n"
				 << "{ \n"
				 << "for(rowSpaces = 4; rowSpaces >= columnSpaces; rowSpaces--) \n"
				 << "{ \n"
				 << "cout << \" \" \n"
				 << "} \n"
				 << "for(dotsIncrement = 0; dotsIncrement < dots; dotsIncrement++) \n"
				 << "{ \n"
				 << "cout << \"*\"; \n"
				 << "} \n"
				 << "cout << endl; \n"
				 << "dots += 2; \n"
				 << "}";
				cout << endl;
				cout << "Type your code here: ";
				cout << endl;
				
				// calls the getTypeUser function
				getTypeUser(result.words);
				
			}
			break;
		
		case 4:
			cout << "See you again! \n";
			exit(EXIT_FAILURE);	// terminate the program
	}
	
}

double getTypeUser(double words)
{
	// start the timer
	start = clock();
	
	// loop function based on the rows entered
	for(rowSpaces = 1; rowSpaces <= rowSpacesLimit; rowSpaces++)
	{
		cin.getline(charArr, NUM_CHAR);
	}
	cout << endl;
				
	// stop the timer, calculate wpm and display message
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << "You finished the code in: " << duration << " s" << endl;
	result.wpm = words / duration;
	cout << "Your typing speed: " << result.wpm << " wpm" << endl;
	
	return words;
}
