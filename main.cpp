#include "puzzle.h"
#include "fuse.h"
#include "puzzle.cpp"
#include "fuse.cpp"
#include <iostream>

using namespace std;

int main()
{

	Puzzle answer("hello");
	
cout << "   _____*\n";
cout << "  /\n";
cout << ",+,\n";
cout << "| |\n";
cout << "|_|\n\n";

	answer.to_string();


return 0;
}

