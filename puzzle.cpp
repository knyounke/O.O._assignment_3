#include "puzzle.h"
#include <string>
#include <iostream>

using namespace std;

bool guesses[255];
string solution;


Puzzle::Puzzle(string s)
{
	s = solution;
};

bool Puzzle::guess(char c)
{
	if(guesses[c] == 1)
	{

		return true;
	}
	else
		guesses[c] = 1;
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
