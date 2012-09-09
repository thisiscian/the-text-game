#include "includes.h"
#include "initialise_game.h"
#include "introduction.h"
#include "start_haiku.h"
#include "asleep.h"

string text(string face, string text)
{
	string i="0", j="0";
	if(face == "red"){i = "31";}
	else if(face == "green"){i = "32";}
	else if(face == "yellow"){i = "33";}
	else if(face == "blue"){i = "34";}
	else if(face == "purple"){i = "35";}
	else if(face == "aqua"){i = "36";}
	else if(face == "grey"){i = "37";}
	else if(face == "underline"){i = "4";}
	
	else if(face == "bred"){i = "31"; j="1";}
	else if(face == "bgreen"){i = "32"; j="1";}
	else if(face == "byellow"){i = "33"; j="1";}
	else if(face == "bblue"){i = "34"; j="1";}
	else if(face == "bpurple"){i = "35"; j="1";}
	else if(face == "baqua"){i = "36"; j="1";}
	else if(face == "bgrey"){i = "37"; j="1";}
	else if(face == "bunderline"){i = "4"; j="1";}

	return "\033["+j+";"+i+"m"+text+"\033[0m";
}

void command(string& name)
{
	cout << text("bgrey", "What do you want to do?") << endl;
	cout << "> " << flush;
	getline (cin, name);
	while(name == "")
	{
		cout << "> " << flush;
		getline (cin, name);
	}
	cout << endl;
	
	for (string::size_type i = 0; i < name.length(); i++)
	{
		name[i] = toupper (name[i]);
	}
	return;
}

void prompt(string& names)
{
	cout << "[" << name <<".BRIGGS ~/BOMBSTOPPER/]$ " << flush;
	getline (cin, names);
	for (string::size_type i = 0; i < names.length(); i++)
	{
		names[i] = toupper (names[i]);
	}
	return;
}


void commandCustom(string& name, string custom)
{
	cout << text("bgrey", custom) << endl;
	cout << "> " << flush;
	getline (cin, name);
	while(name == "")
	{
		cout << "> " << flush;
		getline (cin, name);
	}
	cout << endl;
	
	for (string::size_type i = 0; i < name.length(); i++)
	{
		name[i] = toupper (name[i]);
	}
	return;
}

void capitalise(string& name)
{
	
	for (string::size_type i = 0; i < name.length(); i++)
	{
		name[i] = toupper (name[i]);
	}
	return;
}
