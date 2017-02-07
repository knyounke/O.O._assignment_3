#include "fuse.h"
#include <string>
#include <iostream>

int t;

Fuse(int t);

bool burn()
{

	t -= t;

	if(t != 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

string to_string()
{


	return "   _____*\n  /\n,+,\n| |\n|_|\n\n";

}

