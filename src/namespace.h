#ifndef __NAMESPACE_H__
#define __NAMESPACE_H__

#include <string>
#include <vector>
#include <ncurses.h>
#include "classes.h"

namespace text_game_var
{
	extern WINDOW *output_window;
	extern WINDOW *input_window;
	extern int output_height;
	extern int input_height;
	extern std::string name;
	extern std::string current_command;
	extern std::vector<output_item> output_list;
}
#endif
