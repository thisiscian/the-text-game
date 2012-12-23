#include <string>
#include <ncurses.h>
#include <vector>
#include "classes.h"

namespace text_game_var
{
	WINDOW *output_window;
	WINDOW *input_window;
	int output_height;
	int input_height = 3;
	std::string name = "Timmy";
	std::string current_command;
	std::vector<output_item> output_list;

}
