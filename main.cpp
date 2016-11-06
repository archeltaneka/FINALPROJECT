// FINAL PROJECT
// --CODE TYPE EXERCISE--
// Created by: Archel Taneka
// ID: 2001585556

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Account.h"
using namespace std;

// global variables
const int NUM_CHAR = 1000;
char charArr[NUM_CHAR]; // character array
char answer; // for input Y or N
int inputLevel; // for choosing the level

clock_t start; // timer variable
double duration; // difference between 2 timer


ifstream inputFile; // for reading the answer key in .txt file
char ch; // user input
string fileName;

struct results{
	double wpm; // calculating words per minute
	int words; // count how many words from the sample text
	double correctNum; // number of correct typings
	double incorrectNum; // number of mistypings
	double accuracy; // accuracy display in percentage
};

// declares Account class and variables support
Account nickNames;
string inputNick;

// declares structure with variable
results result;

// declares function prototypes
void getUserLevel();
void displayCode();
double getTypeUser(double);
void getResult();
int getRandNum(int, int);
void tryAgain();

int main(){
	
	// make the console program in full screen
	system("mode 650");
	
	// print welcome message and tell user what is the purpose of the program
	cout << "\t-------------------------------- \n";
	cout << "\t------CODE-TYPE EXERCISE-------- \n";
	cout << "\t-------------------------------- \n";
	cout << endl;
	cout << endl;
	
	cout << "Welcome to CODE-TYPE EXERCISE! \n";
	cout << "We train you to be the fastest coder on the planet! \n";
	cout << "Exercise focus: Speed & Accuracy \n";
	cout << endl;
	cout << endl;
	
	// input nickname for the user
	cout << "Enter nickname(alphanumeric, no spaces): ";
	cin >> inputNick;
	nickNames.setNickName(inputNick);
	
	// calls the function
	getUserLevel();
	displayCode();
	
	return 0;
	
}

// getUserLevel function
void getUserLevel()
{
	
	// print difficulties available
	cout << "Difficulties available: \n";
	cout << "1. Newbie - RECOMMENDED for beginners who has just started coding. \n";
	cout << "2. Veteran - Finally got the hang of it? \n";
	cout << "3. Master - Are you the fastest typist on earth???? \n";
	cout << "4. Typing God - One more.. Dare to take the challenge?? \n";
	cout << "5. Quit \n";
	cout << endl;

}

// displayCode function
void displayCode()
{
	// random number support
	srand(time(0));
	
	// get the random number from 1-3
	int randNum = getRandNum(1, 4);
			
	// get prompt from the user
	cout << "Choose your difficulty(Enter 1 - 4): ";
	cin >> inputLevel;
	
	switch(inputLevel)
	{
		case 1:
			// print info
			cout << "This level is RECOMMENDED for beginner \n";
			cout << "Difficulty: ** \n";
			cout << "Target: \n";
			cout << "Time to finish the code: 40 seconds \n";
			cout << "WPM(Words Per Minute) minimum: 3 WPM \n";
			cout << endl;
			
			// ask the user to input 'Y' answer to continue
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			cout << endl;
			cout << "---------------------------------------- \n";
			if(answer == 'Y' || answer == 'y')
			{		
				// display the sample text code based on number randomed
				if(randNum == 1)
				{
					fileName = "EasyAnswer1.txt"; // file name
					result.words = 268; // set the result.word
					
					cout << "#include <iostream> \n"
					 << "using namespace std; \n"
					 << endl
					 << "int main(){ \n"
					 << endl
					 << "int firstNum; \n"
					 << "int secondNum; \n"
					 << endl
					 << "cout << \"Enter your first number: \";\n"
					 << "cin >> firstNum; \n"
					 << "cout << \"Enter your second number: \";\n"
					 << "cin >> secondNum; \n"
					 << endl
					 << "if(firstNum == secondNum){ \n"
					 << "cout << \"Both numbers are identical\";\n"						 
					 << "}else{\n"
					 << "cout << \"Both numbers are not identical\"; \n"
					 << "} \n"
					 << endl
					 << "return 0;\n"
					 << "}"
					 << "-------------------------------------------------- \n"
					 << endl
					 << "Type Now!! \n"
					 << endl;
				
					// calls the getTypeUser, getResult and tryAgain function
					getTypeUser(result.words);
					getResult();
					tryAgain();
					
				} else if(randNum == 2)
				{
					fileName = "EasyAnswer2.txt";
					result.words = 177;
					
					cout << "#include <iostream> \n"
					 << "using namespace std; \n"
					 << endl
					 << "int main(){ \n"
					 << endl
					 << "string name; \n"
					 << "int age; \n"
					 << endl
					 << "cout << \"Input name: \";\n"
					 << "cin >> name; \n"
					 << "cout << \"Input age: \";\n"
					 << "cin >> age; \n"
					 << endl
					 << "cout << \"Your name is: \" << name; \n"
					 << "cout << \"Your age: \" << age; \n"						 
					 << "return 0;\n"
					 << "}"
					 << endl
					 << "-------------------------------------------------- \n"
					 << "Type Now!! \n"
					 << endl;
						 
					// calls the getTypeUser and getResult function
					getTypeUser(result.words);
					getResult();
						
				} else if(randNum == 3)
				{
					fileName = "EasyAnswer3.txt";
					result.words = 189;
					
					cout << "#include <iostream> \n"
						 << "using namespace std; \n"
						 << endl
						 << "int main(){ \n"
						 << "double payAmount = 2200.0; \n"
						 << "double payPeriods = 26; \n"
						 << endl
						 << "double annualPay = payAmount * payPeriods; \n"
						 << endl
						 << "cout << \"The total annual pay for the employee is: \" << annualPay;\n"
						 << endl
						 << "return 0;\n"
						 << "}"
						 << endl
						 << "-------------------------------------------------- \n"
						 << "Type Now!! \n"
						 << endl;
						 
						 // calls the getTypeUser, getResult and tryAgain function
						getTypeUser(result.words);
						getResult();
						tryAgain();
				}	
				
			}
		break;
		
		case 2:
			// print info
			cout << "This level is for intermediate typing level \n";
			cout << "Difficulty: *** \n";
			cout << "Target: \n";
			cout << "Time to finish the code: 50 seconds \n";
			cout << "WPM(Words Per Minute) minimum: 3 WPM \n";
			cout << endl;
			
			// ask the user to input 'Y' answer to continue
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			cout << endl;
			cout << "---------------------------------------- \n";
			
			if(answer == 'Y' || answer == 'y')
			{
				if(randNum == 1)
				{
					fileName = "MediumAnswer1.txt"; // file name
					result.words = 219; // set the result.word
			
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
					 << endl
					 << "return 0; \n"						 
					 << "}"
					 << endl
					 << "-------------------------------------------------- \n"
					 << "Type Now!! \n "
					 << endl;
			
					// calls the getTypeUser, getResult and tryAgain function
					getTypeUser(result.words);
					getResult();
					tryAgain();
					
				} else if(randNum == 2)
				{
					fileName = "MediumAnswer2.txt"; // file name
					result.words = 244; // set the result.word
			
					cout << "#include <iostream> \n"
					 << "using namespace std; \n"
					 << endl
					 << "int main(){ \n"
					 << endl
					 << "int number; \n"
					 << endl
					 << "cout << \"Enter a number: \";\n"
					 << "cin >> number; \n"
					 << endl
					 << "if(number == 1){\n"
					 << "cout << \"My subject\"; \n"
					 << "}else if(number == 2){\n"
					 << "cout << \"Lecturer/Facilitators\"; \n"
					 << "}else if(number == 3){"
					 << "cout << \"Shared Materials\"; \n"
					 << "}else {\n"
					 << "cout << \"Invalid number!\"; \n"
					 << "}"
					 << endl
					 << "-------------------------------------------------- \n"
					 << "Type Now!! \n "
					 << endl;
			
					// calls the getTypeUser, getResult and tryAgain function
					getTypeUser(result.words);
					getResult();
					tryAgain();
					
				} else if(randNum == 3)
				{
					fileName = "MediumAnswer3.txt"; // file name
					result.words = 313; // set the result.word
			
					cout << "#include <iostream> \n"
					 << "using namespace std; \n"
					 << endl
					 << "int main(){ \n"
					 << endl
					 << "unsigned int distance; \n"
					 << "unsigned int speed; \n"
					 << "unsigned int time; \n"
					 << "int i; \n"
					 << endl
					 << "cout << \"Enter a speed of a vehicle in mph: \"; \n"
					 << "cin >> speed;\n"
					 << "cout << \"How many hours has it traveled? \"; \n"
					 << "cin >> time;\n"
					 << "for(i = 0; i <= time; i++){\n"
					 << "distance = speed * i; \n"
					 << "cout << i << \" hour(s)\" << " " << distance << \" distance traveled\" << endl; \n"
					 << "}"
					 << endl
					 << "return 0; \n"
					 << "}"
					 << endl
					 << "-------------------------------------------------- \n"
					 << "Type Now!! \n "
					 << endl;
					 
					// calls the getTypeUser, getResult and tryAgain function
					getTypeUser(result.words);
					getResult();
					tryAgain();
				}
			}
				
			break;
		
		case 3:
			// print info
			cout << "WARNING: This level is for TYPING MASTER \n";
			cout << "Difficulty: ***** \n";
			cout << "Target: \n";
			cout << "Time to finish the code: 60 seconds \n";
			cout << "WPM(Words Per Minute) minimum: 4 WPM \n";
			cout << endl;
			cout << endl;
			cout << "---------------------------------------- \n";
			
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				if(randNum == 1)
				{
					fileName = "HardAnswer1.txt";
					result.words = 303; // set the result.word
					
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
					 << "}"
					 << endl
					 << "-------------------------------------------------- \n"
					 << "Type Now!! \n"
					 << endl;
				
					// calls the getTypeUser, getResult and tryAgain function
					getTypeUser(result.words);
					getResult();
					tryAgain();
				
				} else if(randNum == 2)
				{
					fileName = "HardAnswer2.txt";
					result.words = 283; // set the result.word
					
					cout << "#include <iostream> \n"
					 << "using namespace std; \n"
					 << endl
					 << "int function(int array[], int arraySize, int n); \n"
					 << endl
					 << "int main(){\n"
					 << endl
					 << "const int ARRAY_SIZE = 5; \n"
					 << "int array[ARRAY_SIZE] = {6, 7, 8, 9, 10}; \n"
					 << "int n = 3; \n"
					 << endl
					 << "function(array, ARRAY_SIZE, n); \n"
					 << "} \n"
					 << endl
					 << "int function(int array[], int arraySize, int n) \n"
					 << "{ \n"
					 << "for(int i = 3; i < arraySize; i++) \n"
					 << "{ \n"
					 << "if(i > n){ \n"
					 << "cout << arraySize << endl; \n"
					 << "} \n"
					 << "} \n"
					 << "} \n"
					 << "-------------------------------------------------- \n"
					 << "Type Now!! \n"
					 << endl;
				
				// calls the getTypeUser, getResult and tryAgain function
					getTypeUser(result.words);
					getResult();
					tryAgain();
					
				} else if(randNum == 3)
				{
					fileName = "HardAnswer3.txt";
					result.words = 499; // set the result.word
					
					cout << "#include <iostream> \n"
					 << "#include <iomanip> \n"
					 << "using namespace std; \n"
					 << endl
					 << "double getHeight(); \n"
					 << "double getRadius(); \n"
					 << "double square(double); \n"
					 << endl
					 << "int main(){\n"
					 << endl
					 << "double const phi = 3.1459; \n"
					 << "double radius; \n"
					 << "double height; \n"
					 << "double volume; \n"
					 << endl
					 << "radius = getRadius(); \n"
					 << "height = getHeight(); \n"
					 << "volume = phi * square(radius) * height * 1/3; \n"
					 << endl
					 << "cout << \"The volume of the cone is: \" << volume; \n"
					 << "return 0; \n"
					 << "} \n"
					 << endl
					 << "double getHeight(){ \n"
					 << "double height; \n"
					 << "cout << \"Enter height: \"; \n"
					 << "cin >> height; \n"
					 << "return height; \n"
					 << "} \n"
					 << endl
					 << "double getRadius(){ \n"
					 << "double radius; \n"
					 << "cout << \"Enter radius: \"; \n"
					 << "cin >> radius; \n"
					 << "return radius; \n"
					 << "} \n"
					 << endl
					 << "double square(double num){ \n"
					 << "return num * num; \n"
					 << "}"
					 << endl
					 << "-------------------------------------------------- \n"
					 << "Type Now!! "
					 << endl;
				
					// calls the getTypeUser, getResult and tryAgain function
					getTypeUser(result.words);
					getResult();
					tryAgain();
				}
				
			}
			break;
			
		case 4:
			// print info
			cout << "WARNING: COME BACK HERE WHEN YOU ARE SKILLED ENOUGH! \n";
			cout << "Difficulty: unknown \n";
			cout << "Target: \n";
			cout << "Time to finish the code: 300 seconds \n";
			cout << "WPM(Words Per Minute) minimum: 3 WPM \n";
			cout << endl;
			cout << endl;
			cout << "---------------------------------------- \n";
			
			// ask the user to input 'Y' answer to continue
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			
			if(answer == 'Y' || answer == 'y')
			{
					fileName = "GodAnswer.txt"; // file name
					result.words = 704; // set the result.word
			
					cout << "#include <cassert> \n"
					 << "#include <cstdlib> \n"
					 << "#include <iostream> \n"
					 << "using namespace std; \n"
					 << endl
					 << "class Cpu{ \n"
					 << "public: \n"
					 << "virtual int dummy(int, int){} \n"
					 << "private: \n"
					 << "virtual int add_(int a, int b) {return a + b;} \n"
					 << "virtual int sub_(int a, int b) {return a - b;} \n"
					 << "virtual int mul_(int a, int b) {return a * b;} \n"
					 << "virtual int div_(int a, int b) {return a / b;} \n"
					 << "virtual int mod_(int a, int b) {return a % b;} \n"
					 << "virtual int and_(int a, int b) {return a & b;} \n"
					 << "virtual int or_(int a, int b) {return a | b;} \n"
					 << "virtual int xor_(int a, int b) {return a ^ b;} \n"
					 << "}; \n"
					 << endl
					 << "int main(){"
					 << "typedef int (Cpu::*Memfun)(int, int); \n"
					 << endl
					 << "union{ \n"
					 << "Memfun fn; \n"
					 << "unsigned char ptr[6]; \n"
					 << "}u; \n"
					 << endl
					 << "Cpu cpu; \n"
					 << "u.fn = &Cpu::dummy; \n"
					 << "assert(argc == 4); \n"
					 << endl
					 << "int p1 = atoi(argv[1]); \n"
					 << "int p2 = atoi(argv[3]); \n"
					 << "char op = argv[2][0]; \n"
					 << endl
					 << "assert(op >= 'A' && op <= 'H'); \n"
					 << "u.ptr[0] = 1 + 4 * (op - 'A' + 1); \n"
					 << endl
					 << "cout << \"The answer is \" << ((cpu.*(u.fn))(p1, p2)) << endl; \n"
					 << endl
					 << "return 0; \n"
					 << "}"
					 << endl
					 << "---------------------------------------------------------- \n"
					 << "Type Now!! "
					 << endl;
			
					// calls the getTypeUser, getResult and tryAgain function
					getTypeUser(result.words);
					getResult();
					tryAgain();
					
			}
		
		case 5:
			cout << "See you again! \n";
			cout << endl;
			cout << "Keep \n"
				 << "Calm \n"
				 << "and \n"
				 << "Keep \n"
				 << "Coding"
				 << "Cheers! :D";
			exit(EXIT_FAILURE);	// terminate the program
			
		default:
			cout << "Invalid input! Please enter number between 1-4! \n";
			displayCode(); // calls the function itself again
	}
	
}

// getTypeUser function
double getTypeUser(double words)
{
	int counter; // array counter
	
	// start the timer
	start = clock();
	
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
	
	// display nickname
	cout << nickNames.getNickName() << "'s stats:" << endl;
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

// getResult function
void getResult()
{
	// check for time and wpm
	if(inputLevel == 1)
	{
		if(duration > 40 && result.wpm < 2)
		{
			cout << "Too slow! Practice more! Your target is < 50 seconds with 3 WPM!";
			cout << "It's okayy.. Practice more! n" << endl;
		} else {
			cout << "Great job! Try the next level! \n";
		}
	} else if(inputLevel == 2)
	{
		if(duration > 50 && result.wpm < 3)
		{
			cout << "Too slow! Practice more! Your target is <= 40 seconds with 3 WPM!";
			cout << "Beat the easy level first \n!" << endl;
		} else {
			cout << "Great job! Try the next level! \n";
		}
	} else if(inputLevel == 3)
	{
		if(duration > 60 && result.wpm < 4)
		{
			cout << "Too slow! Practice more! Your target is <= 100 seconds with 4 WPM!" << endl;
			cout << "Beat the medium level first \n!" << endl;
		} else {
			cout << "Well Done! You've conquered the master level!! Now, you are the a code typing master!";
		}
	} else if(inputLevel == 4)
	{
		if(duration > 60 && result.wpm < 4)
		{
			cout << "Practice before taking this level!! Your target is <= 300 seconds with 3 WPM!" << endl;
			cout << "Beat the master level first \n!" << endl;
		} else {
			cout << "You did it!! You're now the typing GOD!!";
		}
	}
}

// getRandNum function
int getRandNum(int low, int high)
{
	return rand() % (high - low) + low;
}

// tryAgain function
void tryAgain()
{
	// asks the user to play again
	char answer;
	
	cout << "Try again? (Y/N): ";
	cin >> answer;
	
	if(answer == 'Y' || answer == 'y')
	{
		system("CLS"); // clears everything on display output
		main(); // calls the main function
	} else if(answer == 'N' || answer == 'n')
	{
		cout << "Thank you for playing! See you again!";
		exit(EXIT_FAILURE);
	} else {
		cout << "Invalid command!";
		tryAgain(); // call the function itself again
	}
}
