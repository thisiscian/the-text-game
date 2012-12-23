#include "initialise.h"
using namespace std;
using namespace text_game_var;

void end_game()
{
	endwin();
}

void initialise_game()
{
	srand48(time(NULL));
	initscr();
	start_color();
  init_pair(1,COLOR_WHITE,COLOR_BLUE);
	text_game_var::output_height = LINES - text_game_var::input_height;
  noecho();
  cbreak();
  keypad(stdscr, TRUE);
	printw("you shouldn't be able to see this");
	refresh();
}
