#ifndef __OUTPUT_H__
#define __OUTPUT_H__

#include <string>
#include <ncurses.h>
#include "classes.h"
#include "namespace.h"

void clear_output();
void draw_output();
void print_outputs();
void output_item_to_output_list(output_item item);
void newline_output();
void parse_multiline_output(std::string str, std::string align);
void add_output(std::string str, std::string align);
void add_output(std::string str);

#endif
