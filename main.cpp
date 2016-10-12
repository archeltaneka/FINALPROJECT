#include <iostream>
using namespace std;

// declares function prototypes
void getUserLevel();
void displayCode();

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
	cout << "3. Hard - More challenging stuff??? \n";
	cout << "4. Typing Prodigy - Are you fast enough??? \n";
	cout << "5. Typing Master \n";
	cout << endl;

}

// declares displayCode function
void displayCode()
{
	char answer;
	int inputLevel;
		
	// get prompt from the user
	cout << "Choose your difficulty(Enter 1 - 5): ";
	cin >> inputLevel;
	
	switch(inputLevel)
	{
		case 1:
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n"
				 << "using namespace std; \n"
				 << "int main(){ \n"
				 << "cout << hello world!"
				 << "}";
				cout << endl;
			}
			break;
		
		case 2:
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n"
				 << "using namespace std; \n"
				 << "int main(){ \n"
				 << "int num1; \n"
				 << "int num2; \n"
				 << "int total; \n"
				 << "cout << input the first number: ;\n"
				 << "cin >> num1; \n"
				 << "cout << input the second number: ;\n"
				 << "cin >> num2; \n"
				 << "total = num1 + num2; \n"
				 << "cout << The total sum of the two number is: << total;";
				cout << endl;
			}
			break;
		
		case 3:
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n"
				 << "using namespace std; \n"
				 << "cout << hello world!";
				cout << endl;
			}
			break;
		
		case 4:
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n"
				 << "using namespace std; \n"
				 << "cout << hello world!";
				cout << endl;
			}
			break;
		
		case 5:
			cout << "Are you ready? (Press Y to continue) \n";
			cin >> answer;
			if(answer == 'Y' || answer == 'y')
			{
				cout << "#include <iostream> \n"
				 << "using namespace std; \n"
				 << "cout << hello world!";
				cout << endl;
			}
			break;		
	}
	
}
