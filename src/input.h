#ifndef __INPUT_H__
#define __INPUT_H__

#include <string>
#include <vector>
#include <locale>
#include "output.h"

void continue_game();
void draw_input(int version);
std::string toUpper(std::string str);
bool isWhitespace(char command[]);
std::string get_command();
std::string return_command();
bool loose_check_command(std::string command);
bool strict_check_command(std::string command);

#endif

