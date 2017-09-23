#include "puzzle.h"
#include "fuse.h"
#include "puzzle.cpp"
#include "fuse.cpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	Puzzle answer("hello");
	Fuse time(5);
	string response, proposed_solution;



	while(response != "0")
	{
		cout << time.to_string();
			cout << "=============\n  B O O M !\n=============\n";
	cout << "Enter lower case letters to guess, \n" <<
			"! to propose a solution,\n" << 
			"0 to exit.\n";
	cin >> response;
		
	
	if(response == "!")
	{
		cout<<"Enter your proposed solution:\n";
		cin >> proposed_solution;
		answer.solve(proposed_solution);
	}
	else if(response != "0")
	{
		char guess;
		cout << "Please enter your character guess: ";
		cin >> guess;
		answer.guess(guess);
		if(time.burn() == 0)
			{
				cout <<"###### BOOM ######\nThe answer was: hello";
			}
		answer.to_string();
	
	}
}
return 0;
}

