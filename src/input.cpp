#include "input.h"
using namespace std;
using namespace text_game_var;

void continue_game()
{
	delwin(input_window);
	draw_input( 1);
	getch();
}

void draw_input(int version)
{
	input_window = newwin(input_height,0,LINES-input_height,0);
  box(input_window, 0 , 0);
	string str;
	switch(version)
	{
		case 0:
			wmove(input_window, 1,1);
        		wprintw(input_window,">");
			wmove(input_window, 1,3);
			break;
		case 1:
			wmove(input_window, 1,1);
			str = "<CONTINUE>";
			wmove(input_window, 1, (COLS-str.length())/2); 
			wprintw(input_window, str.c_str());
			wbkgd(input_window, COLOR_PAIR(1));
			wrefresh(input_window);
			break;
		case 2:
			str = "WAIT";
			wmove(input_window, 1, (COLS-str.length())/2); 
			wprintw(input_window, str.c_str());
			wrefresh(input_window);
			break;
	}
  wrefresh(input_window); 
}

string toUpper(string str)
{
	locale settings;
	string converted;

	for(size_t i = 0; i < str.size(); ++i)
		converted += (toupper(str[i], settings));
	
	return converted;
}

bool isWhitespace(char command[])
{
	for(int i=0; i<COLS; i++)
	{
		if(command[i] == '\0')
		{
			return true;
		}
		if(!isspace(command[i]))
		{
			return false;
		}
	}
	return true;
}

string get_command()
{
	delwin(input_window);
	draw_input(0);
	wbkgd(input_window, COLOR_PAIR(1));
	echo();
	char command[COLS];
	wgetstr(input_window, command);
	noecho();
	if(isWhitespace(command))
	{
		return get_command();
	}
	current_command = toUpper(command);
	add_output("> " + current_command);
	return (string) toUpper(command);
}

string return_command()
{
	return current_command;
}

bool loose_check_command(string command)
{
	if(current_command.find(command) != string::npos)
		return true;
	else
		return false;
}

bool strict_check_command(string command)
{
	if(command == current_command)
		return true;
	else 
		return false;
}
