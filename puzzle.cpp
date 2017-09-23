#include "puzzle.h"
#include <string>
#include <iostream>

using namespace std;

bool guesses[255];
string solution;



bool Puzzle::guess(char c)
{	guesses[c] = 1;
	if(solution.find(c) == string::npos)
	{
		cout << c << " is in the answer!\n";
		return true;
	}
	else
		cout << c << " is not in the answer\n";
		return false;
}

string Puzzle::solve(string proposed_solution)
{
	if(proposed_solution == solution)
		return "*** W I N N E R ***";
	else
		return "###### BOOM ######\nThe answer was: hello";
}

string Puzzle::to_string()
{

	for(int i=0; i < solution.length(); i++)
	{

		if(guesses[solution.at(i)] == 1)
		{
			cout << solution.at(i);
		}
		else if (solution.at(i) == ' ')
		{
			cout << " ";
		}
		else
		{
			cout << "_";
		}
	}

}

string Puzzle::get_solution()
{

	return solution;
}
