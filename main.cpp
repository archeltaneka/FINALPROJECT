// Created by: Archel Taneka
// ID: 2001585556

#include <iostream>
#include <iomanip>
#include <fstream>
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

ifstream inputFile; // for reading the answer key in .txt file
char ch; // user input
string fileName;

struct results{
	double wpm; // calculating words per minute
	int words; // count how many words from the sample text
	int correctNum;
	int incorrectNum;
	double accuracy;
};

// declares structure with variable
results result;

// declares function prototypes
void getUserLevel();
void displayCode();
double getTypeUser(double);
void getResult();

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
	cout << "3. Master - Fast enough???? \n";
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
			
			fileName = "Answer1.txt"; // file name
			result.words = 67; // set the result.word
			//rowSpacesLimit = 7; // set the spaces limit
			
			// print info
			cout << "This level is RECOMMENDED for beginner \n";
			cout << "Difficulty: * \n";
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
				cout << endl;
				cout << "Type your code here: \n";
				
				// calls the getTypeUser and getResult function
				getTypeUser(result.words);
				getResult();
				
			}
			break;
		
		case 2:
			
			fileName = "Answer2.txt"; // file name
			result.words = 211; // set the result.word
			//rowSpacesLimit = 17; // set the spaces limit
			
			// print info
			cout << "This level is for typing novice \n";
			cout << "Difficulty: ** \n";
			cout << "Target: \n";
			cout << "Time to finish the code: 40 seconds \n";
			cout << "WPM(Words Per Minute): 0.7 WPM \n";
			cout << endl;
			
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n"
				 << "using namespace std; \n"
				 << endl
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
				 << "cout << \"The total sum of the two number is: \" << total; \n"
				 << "}";
				cout << endl;
				cout << endl;
				cout << "Type your code here: ";
				cout << endl;
				
				// calls the getTypeUser and getResult function
				getTypeUser(result.words);
				getResult();
				
			}
			break;
		
		case 3:
			
			fileName = "Answer3.txt";
			result.words = 303; // set the result.word
			//rowSpacesLimit = 22; // set the spaces limit
			
			// print info
			cout << "WARNING: This level is for TYPING MASTER \n";
			cout << "Difficulty: ***** \n";
			cout << "Target: \n";
			cout << "Time to finish the code: 100 seconds \n";
			cout << "WPM(Words Per Minute): 0.4 WPM \n";
			cout << endl;
			
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n"
				 << "using namespace std; \n"
				 << endl
				 << "int main(){\n"
				 << endl
				 << "int columnSpaces; \n"
				 << "int rowSpaces; \n"
				 << "int dotsIncrement; \n"
				 << "int dots = 1; \n"
				 << endl
				 << "for(columnSpaces = 1; columnSpaces <= 5; columnSpaces++) \n"
				 << "{ \n"
				 << "for(rowSpaces = 4; rowSpaces >= columnSpaces; rowSpaces--) \n"
				 << "{ \n"
				 << "cout << \" \"; \n"
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
				
				// calls the getTypeUser and getResult function
				getTypeUser(result.words);
				getResult();
				
			}
			break;
		
		case 4:
			cout << "See you again! \n";
			exit(EXIT_FAILURE);	// terminate the program
	}
	
}

double getTypeUser(double words)
{
	int counter; // array counter
	
	// start the timer
	start = clock();
	
	// loop function based on the rows entered
	/*for(rowSpaces = 1; rowSpaces <= rowSpacesLimit; rowSpaces++)
	{
		cin.getline(charArr, NUM_CHAR);
	}
	cout << endl;*/
	
	// open Answer1.txt file
	inputFile.open(fileName);
	
	// get user input and also check for mistypings
	while(inputFile >> ch)
	{
		cin >> charArr[counter];
		
		if(ch == charArr[counter])
		{
			result.correctNum += 1;
		} else {
			result.incorrectNum += 1;
		}
		counter ++;
	}
	
	// close Answer1.txt file
	inputFile.close();
				
	// stop the timer, calculate wpm, accuracy and display message
	cout << endl;
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << "You finished the code in: " << duration << " s" << endl;
	result.wpm = words / duration;
	
	cout << "You typed: " << result.correctNum << " correct characters" << endl;
	cout << "You typed: " << result.incorrectNum << " incorrect characters" << endl;
	result.accuracy = result.correctNum / result.words * 100;
	
	// set output format
	cout << setprecision(2) << fixed << showpoint;
	cout << "Accuracy: " << result.accuracy << "%" << endl;
	cout << "Your typing speed: " << result.wpm << " wpm" << endl;
	
	return words;
}

void getResult()
{
	// check for time and wpm
	if(inputLevel == 1)
	{
		if(duration > 15 && result.wpm < 0.5)
		{
			cout << "Too slow! Practice more! Your target is <= 15 seconds with at least 0.5 WPM!";
			cout << "It's okayy.. Practice more!" << endl;
		} else {
			cout << "Great job! Try the next level!";
		}
	} else if(inputLevel == 2)
	{
		if(duration > 40 && result.wpm < 0.7)
		{
			cout << "Too slow! Practice more! Your target is <= 40 seconds with at least 0.7 WPM!";
			cout << "Try to beat easy level!" << endl;
		} else {
			cout << "Great job! Try the next level!";
		}
	} else if(inputLevel == 3)
	{
		if(duration > 100 && result.wpm < 0.4)
		{
			cout << "Too slow! Practice more! Your target is <= 100 seconds with at least 0.8 WPM!" << endl;
			cout << "Try to beat medium level!" << endl;
		} else {
			cout << "Well Done! You've conquered the master level!! Now, you are the a code typing master!";
		}
	}
}
