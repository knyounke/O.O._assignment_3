#include "fuse.h"
#include <string>
#include <iostream>

int t;

Fuse::Fuse(int t)
{
	t = time;
};

bool Fuse::burn()
{

	if(t != 0)
	{
		t -= 1;
		return true;
	}
	else
	{

		return false;
	}

}

string Fuse::to_string()
{
	string fuse;
	string light = "*\n";
	string bomb = " /\n,+,\n| |\n|_|\n\n";
	for(int i; i < t; i++)
	{
		fuse.append("_");

	}
	fuse.append(light);
	fuse.append(bomb);

	return fuse;

}

