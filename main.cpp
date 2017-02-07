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

	cout << "=============\n  B O O M !\n=============\n";
	cout << "Enter lower case letters to guess, \n" <<
			"! to propose a solution,\n" << 
			"0 to exit.\n";
	cin >> response;

	if(response == "0")
	{
		return 0;
	}
	else if(response != "!")
	{
		cout<<"Enter your proposed solution:\n";
		cin >> proposed_solution;
		answer.solve(proposed_solution);
	}
	else
	{
		char guess;
		cout << "Please enter your character guess: ";
		cin >> guess;
		answer.guess(guess);
		time.burn();
	}

return 0;
}

