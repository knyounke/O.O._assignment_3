#ifndef PUZZLE_H
#define PUZZLE_H 2017
#include <string>

using namespace std;
class Puzzle
{
	private:
		std::string solution;
		bool guesses[255];
	public:
		Puzzle(string _solution) : solution(_solution) {}
		bool guess(char c);
		std::string solve(std::string proposed_solution);
		std::string to_string();
		std::string get_solution();

};

#endif
