#include "story.h"

void introduction()
{
	newline_output();
	newline_output();
	newline_output();
	add_output("Made by /bCIANb/ and /bFIONNb/ for MS-DOS", "c");
	add_output("Copyright (C) 1979.", "c");
  add_output("This is a text adventure game! There will be some text and some adventure.", "c");
  add_output("Acceptable commands are \"LISTEN\". Maybe there will be more, maybe there will be less.", "c");
  add_output("The adventure will start after a brief haiku...", "c");
	continue_game();
}
