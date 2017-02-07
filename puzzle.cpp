#include "puzzle.h"
#include <string>
#include <iostream>

using namespace std;

bool guesses[255];
string solution;





bool guess(char c)
{
	if(guesses[c] == 1)
	{

		return true;
	}
	else
		guesses[c] = 1;
		return false;
}

string solve(string proposed_solution)
{
	if(proposed_solution == solution)
		return solution;
	else
		return "That is not the correct answer.";
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

string get_solution()
{

	return solution;
}
