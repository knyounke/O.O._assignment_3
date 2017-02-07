#include "puzzle.h"
#include <string>

using namespace std;

bool guesses[255];
string solution;

Puzzle::Puzzle(string s)
{
	solution = s;
}



bool guess(char c)
{
	guesses[c] = solution.find(c);
	return guesses[c];
}

